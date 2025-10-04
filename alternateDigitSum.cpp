// TC = O(log₁₀(n)), SC = O(log₁₀(n))
class Solution {
public:
      
    int alternateDigitSum(int n) {
      string nums = to_string(n);
      int sign = 1;
      int answer = 0;
      for(int i=0;i<nums.size();i++){
        answer += ((nums[i] - '0') * sign);
        sign *= -1;
      }
      return answer;
    }
};
