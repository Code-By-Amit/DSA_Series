class Solution {
public:
    string largestOddNumber(string num) {
        int maxDigit = INT_MIN;
        for(int i=num.length()-1; i>=0;i--){
            int digit = '0' - num[i];
            if(digit%2 != 0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};
