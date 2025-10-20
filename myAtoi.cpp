class Solution {
public:
    int myAtoi(string s) {
        long result = 0;
        int sign = 1;
        int i = 0;

        while(i < s.size() && s[i] == ' ') i++;
        if(s[i] == '-'  || s[i] == '+'){ 
           if(s[i] == '-') sign = -1;
            i++;
        }

        while(i<s.size() && isdigit(s[i]) ){
            int digit = s[i] - '0';
            result = result * 10 + digit;
            if(sign * result > INT_MAX) return INT_MAX;
            if(sign * result < INT_MIN) return INT_MIN;
            i++;
        }
        return result*sign;
    }
};
