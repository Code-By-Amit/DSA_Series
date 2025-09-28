class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int j = b.size()-1;
        int i = a.size()-1;
        int carry = 0;

        while(i >= 0 || j>=0 || carry != 0){
            int digit_a = i >= 0 ? a[i] - '0' : 0;
            int digit_b = j >= 0 ? b[j] - '0': 0;
            int sum = digit_a + digit_b + carry;
            ans.push_back(sum%2 + '0');
            carry = sum /2;
            i--;
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
