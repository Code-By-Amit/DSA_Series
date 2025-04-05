// BruteForce Approach
class Solution {
public:
    int findGCD(vector<int>& nums) { // TC O(min(a,b))
        int min = INT_MAX; 
        int max = INT_MIN;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] < min) min = nums[i];
            if(nums[i] > max) max = nums[i];
        }

        int gcd;
        for(int i=1;i<=min;i++){
            if(min%i==0 && max%i == 0){
                gcd = i;
            }
        }
        return gcd;
    }
};

// Optimal Approach
class Solution {
public:
    int findGCD(vector<int>& nums) { // TC O(n))
        int min = INT_MAX; 
        int max = INT_MIN;
        int n = nums.size();

        for(int i=0;i<n;i++){ 
            if(nums[i] < min) min = nums[i];
            if(nums[i] > max) max = nums[i];
        }
 
      while(max != 0){  
            int temp = max;
            max = min%max;
            min = temp;
        }
       
        return min;
    }
};
