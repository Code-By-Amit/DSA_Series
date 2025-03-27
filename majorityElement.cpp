#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Brute force Approach
// int majorityElement(vector<int>& nums) {
//     for(int val:nums){
//         int freq = 0;
//         for(int el:nums){
//             if(val == el) freq++;
//         }
//         if(freq > (val/2)) return val;
//     }
//     return -1;
// }

// More Optimized Approach:
// int majorityElement(vector<int> &nums)
// {
//     sort(nums.begin(),nums.end());
//     int freq = 1;
//     int ans = nums[0];
//     int n = nums.size();

//     for(int i=1; i < nums.size(); i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }else{
//             freq = 0;
//             ans = nums[i];
//         }

//         if(freq > n/2){ 
//             return ans;
//         }
//     }
//     return ans;
// }

// Moore's Voting Algorithm
int majorityElement(vector<int> nums){
    int freq = 0;
    int ans = 0;
    for(int i =0; i<nums.size();i++){
        if(freq == 0) ans = nums[i];
        if(ans == nums[i]) freq++;
        else freq--;
    }

     // if dont know whether or not majority element Exists
    int count = 0;           
    for(int val:nums){
        if(val==ans){
            count++;
        }
    }
    if(count > nums.size()/2) ans;
    else return -1;
}

int searchInsert(vector<int>& nums, int target) {
    for(int i=0; i<nums.size();i++){
        cout << i << " " << endl;
        if(i == nums.size()-1) return i+1;
        if(nums[i] > target ) return i-1;
        else if(nums[i]==target) return i;
    }
    return -1;
}


int main()
{
    vector<int> nums = {1,3,4,5};

    cout << "Search Insesert is :" << searchInsert(nums,2) << endl;
    // cout << "majorityElement is :" << majorityElement(nums) << endl;
}
