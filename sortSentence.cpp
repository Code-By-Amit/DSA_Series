class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10,"");
        int n = s.size();
        for(int i=0; i<n; i++){
            string word = "";
            int currWordIndex;
            while(i<n && s[i] != ' '){
                if(isalpha(s[i])){
                word += s[i];
                }else{
                    currWordIndex = s[i] - '0';
                }
                i++;
            }
            words[currWordIndex-1] = word;
           
        }

         string result;
            for(int i=0;i<words.size();i++){
                if(words[i] != ""){
                   result += words[i];
                   result += " ";
                }
            }
             result.pop_back();
            return result;

    }
};
