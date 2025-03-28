#include <vector>
#include <iostream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    int first = 0;
    int second = 1;
    while(first < nums.size()-1){
        if(nums[first]+nums[second] == target){
            ans.push_back(first);
            ans.push_back(second);
            return ans;
        }
        if(first < nums.size()-1 && second == nums.size()-1){
            first++;
            second =first +1;
        }else{
        second++;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3,2,3};
    vector<int> ans = twoSum(nums,6);

    cout << "first: " << ans[0] <<" second:" << ans[1] << endl;
    return 0;
}