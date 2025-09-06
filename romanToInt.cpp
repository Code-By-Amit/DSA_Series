class Solution {
public:
    int getSymbolValue(char symbol){
        switch (symbol){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default:return 0;
        };
    }

    int romanToInt(string s) {
        int ans = 0;
        for(int i=0; i<s.length(); i++){
            int currentVal = getSymbolValue(s[i]);
            int nextVal = getSymbolValue(s[i+1]);
            if( currentVal<nextVal ){
                ans-=currentVal;
            }else{
                ans+=currentVal;
            }
        }
        return ans;
    }
};
