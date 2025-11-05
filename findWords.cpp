class Solution {
public:
    bool checkRow(unordered_set<char> &row, string &str){
        for(char ch: str){
            if(row.find(tolower(ch)) == row.end()) return false;
        }
        return true;
    }

    vector<string> findWords(vector<string>& words) {
       unordered_set<char> first_row = {'q','w','e','r','t','y','u','i','o','p'};
       unordered_set<char> second_row = {'a','s','d','f','g','h','j','k','l'};
       unordered_set<char> third_row = {'z','x','c','v','b','n','m'};
        vector<string> ans;

        for(string str: words){
           char first = tolower(str[0]);
            if(first_row.count(first)){
                if(checkRow(first_row, str)) ans.push_back(str);      

            }else if(second_row.count(first)){
                if(checkRow(second_row, str)) ans.push_back(str);
                
            }else{
               if(checkRow(third_row, str))  ans.push_back(str);
            }   
        }
        return ans;
    }
};
