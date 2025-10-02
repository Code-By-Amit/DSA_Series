class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;

        for(string word: words){
            string str = "";
            for(char ch: word){
                if(ch == separator && str != ""){
                    result.push_back(str);
                    str="";
                }else if(ch != separator) str+=ch;
            }
            if(str != "") result.push_back(str);
        }
        return result;
    }
};
