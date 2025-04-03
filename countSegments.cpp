class Solution {
public:
    int countSegments(string s) {
        int segments = 0;
        int n = s.length();
        for(int i=0; i<n;i++){
            string word = "";
            while( i<n && !isspace(s[i])){
                word += s[i];
                i++;
            } 
            if(word.length()>0){
                 segments++;
            }
        }
        return segments;
    }
};
