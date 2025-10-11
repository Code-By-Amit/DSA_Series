#include <iostream>
#include <vector>

using namespace std;

void helper(vector<vector<int>> mat, int row, int col, string path, vector<string> &ans)
{
    int n = mat.size();
    if (row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0 || mat[row][col] == -1)
    {
        return;
    }

    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(path);
        return;
    }

    mat[row][col] = -1;

    helper(mat, row + 1, col, path + "D", ans);     // Down
    helper(mat, row - 1, col, path + "U", ans);     // Up
    helper(mat, row, col - 1, path + "L", ans);     // Left
    helper(mat, row, col + 1, path + "R", ans); // Right

    mat[row][col] = 1;
}

vector<string> findPath(vector<vector<int>> mat)
{
    vector<string> ans;
    string path;
    helper(mat, 0, 0, path, ans);
    return ans;
}

int main()
{
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans = findPath(mat);

    for (string str : ans)
    {
        cout << str << endl;
    }

    return 0;
}
