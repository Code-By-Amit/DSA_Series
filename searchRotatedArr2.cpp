// Time Complexity : O(log n) but sill in wrost case O(n) 
// Space Complexity: O(1)
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int st = 0;
        int end = nums.size()-1;

        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] == target) return true;
            if(st < end  && nums[st] == nums[mid] && nums[mid] == nums[end]){
                 st++; end--; 
                 continue;
             }

            if(nums[st] <= nums[mid]){ // Left Half sorted 
                if(nums[st] <= target && nums[mid] >= target) end = mid-1; 
                else st = mid +1;
            }else{ // Right Half sorted 
                 if(nums[mid] <= target && nums[end] >= target) st = mid+1;
                else end = mid-1;
            }
        }
        return false;
    }
};
