
class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int right = 0;

        for(int i:nums) right += i;

        int count = 0;
        int left = 0;
        for(int i : nums){
            left += i;
            right -= i;
            if(i != 0) continue;
            if(left == right) count += 2;
            if(abs(left - right) == 1) count += 1; 
        }

        return count;
    }
};

class Solution {
public:
    bool isValid(vector<int> nums, int direction, int curr) {
        int n = nums.size();
        while (curr < n && curr >= 0) {
            if (nums[curr] > 0) {
                nums[curr]--;
                direction *= -1;
            }
            curr += direction;
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) return false;
        }
        return true;
    }

    int countValidSelections(vector<int>& nums) {
        int n = nums.size();

        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                count += isValid(nums, -1, i);
                count += isValid(nums, 1, i);
            }
        }

        return count;
    }
};
