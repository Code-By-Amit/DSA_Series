class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        int n = nums.size();
        // first step: identify the pivot.
        for(int i = n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                pivot = i;
                break;
            }
        }

        if(pivot == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        // second step:find the smallest from right most 
        int smallest = n-1;
        for(int i=n-1;i>pivot;i--){
            if(nums[i] > nums[pivot]){
                smallest = i;
                break;
            }
        }  
        swap(nums[pivot],nums[smallest]);

        // third step : reverse the right of pivot
        reverse(nums.begin()+pivot+1, nums.end());
    }
};
