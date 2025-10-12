class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
         
         int left = 0;
         int right = letters.size()-1;
         char ans = letters[0];
         while(left <= right){
            int mid = left + (right-left)/2;
            if(letters[mid] > target){
                right = mid-1;
                ans = letters[mid];
            }else left = mid+1;
         }

        return ans;
    }
};
