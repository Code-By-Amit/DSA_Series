class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0) return false;
        long int ans = 0;
        int tempX = x;

        while(tempX > 0){
            int digit = tempX % 10; 
            ans = ans * 10 + digit;
            tempX /= 10;
        }
        if(ans == x){
            return true;
        }
        return false;
    }
};
