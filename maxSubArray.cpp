#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Brute Force Approach:

// int maxSubArray(vector<int> arr){
//     int maxSum = INT_MIN;
//     for (int st = 0; st < arr.size(); st++)
//     {
//         int currentSum = 0;
//         for (int end = st; end < arr.size(); end++)
//         {
//             currentSum += arr[end];
//             maxSum = max(maxSum, currentSum);
//         }
//     }
//     return maxSum;
// }

// using Kadane's Algorithm

int maxSubArray(vector<int> arr)
{
    int currentSum = 0, maxSum = INT_MIN;
    for (int val : arr)
    {
        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
}




int main()
{

    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
    int target = 12;
    cout << "Maximum sub array sum is: " << maxSubArray(arr) << endl;
    return 0;
}