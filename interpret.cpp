// Time: O(n) || Space: O(n)
class Solution {
public:
    string interpret(string command) {
        string result;
        int n = command.size();
        for(int i=0; i<n;i++){
            if(command[i] == 'G'){
                result+='G';
            }else if(i<(n-1) &&command[i] == '(' && command[i+1] == ')'){
                result+='o';
                i++;
            }else{
                result+="al";
                i+=3;
            }
        }
        return result;
    }
};
