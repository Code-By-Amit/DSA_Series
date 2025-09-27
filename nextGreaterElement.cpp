// Time complexity: O(m + n) || Space complexity: O(n)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());
        unordered_map<int, int> map;
        stack<int> st;

        for (int currNum : nums2){
            while(!st.empty() && currNum > st.top()){
                map[st.top()] = currNum;
                st.pop();
            }
            st.push(currNum);
        }

        for(int currNum: nums2){
            if(map.find(currNum) == map.end()){
                map[currNum] = -1;
            }
        }

        for(int i=0;i<nums1.size();i++){
            ans[i] = map[nums1[i]];
        }
            return ans;
    }
};

// Time complexity: O(m * n) || Space complexity: O(1)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>  ans(nums1.size());

        for(int i=0; i<nums1.size(); i++){
             for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    int currentNum = nums2[j];
                    int nextGreater = nums2[j];
                    while(j<nums2.size()){
                        nextGreater = max(nextGreater, nums2[j++]);
                        if(nextGreater > currentNum) break;
                    }
                    if(nextGreater == currentNum) ans[i] = -1; 
                    else ans[i] = nextGreater;
                }
             }
        }
        return ans;
    }
};
