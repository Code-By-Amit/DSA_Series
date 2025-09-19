// Time = O(n) || Space = O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int left = 0;
        int right = numbers.size()-1;

        while(left<right){
            int a = numbers[left] ;
            int b = numbers[right];
            if(a+b == target){
                result.push_back(left+1);
                result.push_back(right+1);
                break;
            }
            if(a+b>target) right--;
            else left++;
        }
        return result;
    }
};
