
// Time Complexity: O(n) 
// Space Complexity:O(1)

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int currRun = 1;
        int prevRun = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[i-1]) currRun++;
            else{
               prevRun = currRun;
               currRun = 1;
            }

            if(prevRun/2 >= k) return true;
            if(min(prevRun,currRun) >= k) return true;
        }
        return false;
    }
};


// Time Complexity: O(n*k) 
// Space Complexity:O(1)

class Solution {
public:
    bool isIncreasing(vector<int> arr,int start,int end){
        for(int i=start; i< end;i++){
            if(arr[i] >= arr[i+1]) return false;
        }
        return true;
    }

    bool hasIncreasingSubarrays(vector<int>& nums, int k) {

        for(int i=0; i<nums.size();i++){
             int winStart = i;
             int winEnd = i+2*k-1;

            if(winEnd >= nums.size()) break;

             bool subArr1 = isIncreasing(nums, winStart, i+k-1);
             bool subArr2 = isIncreasing(nums, i+k, winEnd);
             cout << subArr1 << subArr2 << endl;
             if(subArr1 && subArr2) return true;
        }
        return false;
    }
};
