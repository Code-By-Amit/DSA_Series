#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end){
            if (nums[start] == val){
                while (end > start && nums[end] == val){
                    end--;
                }
                swap(nums[start], nums[end]);
                end--;
            }
            start++;
        }
        return end + 1;
    }
};