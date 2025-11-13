class Solution {
public:
    int maxOperations(string s) {
        int count = 0;
        int operations = 0;

        for(int i=0; i<s.size();i++){
            char ch = s[i];
            if(ch == '0'){
                operations += count;
                while(i < s.size() && s[i+1] == '0'){ i++; }
            }else{
                count++;
            }
        }
        return operations;
    }
};
