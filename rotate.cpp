// Time = O(n) (3 reversals = 3n ≈ n) || Space = O(1) (no extra array)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       k = k%n;
       
       int left = 0;
       int right = n-1;
       while(left<=right){
        swap(nums[left++],nums[right--]);
       }

       left = 0;
       right = k-1;
       while(left<=right) swap(nums[left++],nums[right--]);
       left = k;
       right = n-1;
       while(left<=right) swap(nums[left++],nums[right--]);
    }
};

// Time = O(n) ||  Space = O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       vector<int> result(n);

       for(int i=0;i<nums.size();i++){
        int index = (i+k)%n;
        result[index] = nums[i];
       }
       nums = result;
    }
};
