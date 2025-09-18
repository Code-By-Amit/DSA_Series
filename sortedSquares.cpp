// Time complexity: O(n) || space Complexity O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0;
        int right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            long int square;
            if (abs(nums[left]) > abs(nums[right])) {
                result[pos--] = nums[left] * nums[left];
                left++;
            } else {
                result[pos--] = nums[right] * nums[right];
                right--;
            }
        }

        return result;
    }
};


// Time complexity: O(n+ log n) || space Complexity O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector<int> result;
      for(int i=0;i<nums.size();i++){
        int square = abs(nums[i]) * abs(nums[i]);
        result.push_back(square);
      }
      sort(result.begin(),result.end());
      return result;
    }
};
