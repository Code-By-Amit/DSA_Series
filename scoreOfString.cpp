class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;

        for(int i=1; i<s.size(); i++){
            int a = abs(s[i-1] - '0');
            int b = abs(s[i] - '0');
            sum += (abs(a-b));
        }
        return sum;
    }
};
