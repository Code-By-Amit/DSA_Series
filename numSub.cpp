class Solution {
public:
    int M = 1e9  + 7;
    int numSub(string s) {
        
       long long int result = 0;
       long long int count = 0;

        for(char ch: s){
            if(ch == '1'){
                count ++;
                result = (result + count)% M;
            }else{
                count = 0;
            }
        }

        return result;
    }
};

class Solution {
public:
    int M = 1e9  + 7;
    int numSub(string s) {
        
       long long int result = 0;
       long long int count = 0;

        for(char ch: s){
            if(ch == '1'){
                count ++;
            }else{
                result += count * (count+1)/2 % M;
                count = 0;
            }
        }
         result += count * (count+1)/2 % M;
        return result;
    }
};
