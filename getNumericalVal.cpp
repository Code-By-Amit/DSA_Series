// TC: O(m+n+k) || SC: O(1)
class Solution {
public:
    int getNumericalVal(string str){
        int num = 0;
        for(char ch: str){
            int val= ch-'a';
            num = num *10 +val;
        }
        return num;
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        int num1 = getNumericalVal(firstWord);
        int num2 = getNumericalVal(secondWord);
        int num3 = getNumericalVal(targetWord);
        return num1+num2 == num3;
    }
};
