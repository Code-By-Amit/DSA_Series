class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        string ans = "";

        for(int i=0;i<n; i++){
           string word = "";
           while(i<n && title[i] != ' '){
            char ch = tolower(title[i++]);
            word.push_back(ch);
           } 
           if(word.size() > 2) word[0]= toupper(word[0]);
           cout << word << endl;

           word.push_back(title[i]);
           ans += word;
        }
        ans.pop_back();
        return ans;
    }
};
