#include <iostream>
#include <vector>

using namespace std;

// Brute force Approach 
// vector<int> pairSum(vector<int> nums, int target)
// {
//     vector<int> result;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if ((nums[i] + nums[j]) == target)
//             {
//                result.push_back(i);
//                result.push_back(j);
//                return result;
//             }
//         }
//     }
// }

// More Optimized approach for Sorted Array:
 vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int i = 0,j=nums.size()-1;
    int pairSum = 0;
    while(i<j){
        pairSum = nums[i] + nums[j];
        if(pairSum < target){
            i++;
        }else if(pairSum > target){
            j--;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main()
{

    vector<int> nums = {2,4,6,8,9};
    int target = 12;

    vector<int> ans = pairSum(nums,target); 
    cout << "Sum Pair is: "<< ans[0] << " " << ans[1] << endl; 
    return 0;
}