// TC: O(n) || SC: O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int leftMax = 0;
        int rightMax = 0;

        int left = 0;
        int right = n - 1;

        while (left < right) {
            leftMax = max(leftMax, height[left]);
            rightMax = max(rightMax, height[right]);

            if (leftMax < rightMax) {
                ans += leftMax - height[left];
                left++;
            } else {
                ans += rightMax - height[right];
                right--;
            }
        }

        return ans;
    }
};

// TC: O(n) || SC: O(n)
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        vector<int> rightMax(n, -1);
        int leftMax = height[0];
        rightMax[n - 1] = height[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        for (int i = 0; i < n; i++) {
            leftMax = max(leftMax, height[i]);
            ans += min(rightMax[i], leftMax) - height[i];
        }

        return ans;
    }
};
