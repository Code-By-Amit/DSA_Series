// Time Complexity: O(n) || Space Complexity: O(1)
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return false;

        int p,q,i=0;
        while( i < n-1 && nums[i] < nums[i+1]) i++;
        p=i;
        if(p==0 || p>=n-2) return false;

        while( i < n-1 && nums[i] > nums[i+1]) i++;
        q = i;
        if(q <= p || q >= n-1) return false;

        while( i < n-1 && nums[i] < nums[i+1]) i++; 

        return i == n-1;
    }
};
