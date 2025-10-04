
// TC: O(1) and SC: O(1)
class Solution {
public:
    int addDigits(int num) {
        if(num==0) return 0;
        return num % 9 == 0 ? 9 : num % 9;
    }
};

// TC: O(log10(num)) and SC: O(1)
class Solution {
public:
    int calculateSum(int num) {
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            sum += digit;
        }
        return sum;
    }
    int addDigits(int num) {
        int sum = num;
        while (sum > 9) {
            sum = calculateSum(sum);
        }
        return sum;
        
    }
};

