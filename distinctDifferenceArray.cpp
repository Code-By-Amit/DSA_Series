// Time Compexity: O(n) || Space Complexity: O(n)
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        unordered_set<int> setL; 
        unordered_set<int> setR;

         vector<int> prefix(n,0);
         vector<int> suffix(n,0); 

        for(int i=0;i<n;i++){
           setL.insert(nums[i]);
           prefix[i] = setL.size();
        }

        for(int i=n-1;i>=0;i--){
           if(i<n-1) setR.insert(nums[i+1]);
            suffix[i] = setR.size();
        }

        for(int i=0;i<n;i++){
            int diff = prefix[i] - suffix[i] ;
            result.push_back(diff);
        }
        
        return result;
    }
};

// Time Compexity: O(n^2) || Space Complexity: O(n)
class Solution {
public:

    int distinct(int start, int end,vector<int> arr){
        unordered_set<int> set;
        for(int i = start; i < end;i++){
            set.insert(arr[i]);
        }
        return set.size();
    }

    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        for(int i=0;i<n;i++){
           int prefixDist = distinct(0, i+1,nums);
           int suffixDist = distinct(i+1,n,nums);
           int diff = prefixDist - suffixDist;
           result.push_back(diff);
        }
        return result;
    }
};
