//Time Complexity: O(log n) || Space Complexity O(1)
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sumOfDigits = 0;
        int productOfDigits = 1;
        while(n!=0){
            int lastDigit = n%10;
            n/=10;
            sumOfDigits+=lastDigit;
            productOfDigits*=lastDigit;
        }

        return productOfDigits - sumOfDigits;
    }
};
