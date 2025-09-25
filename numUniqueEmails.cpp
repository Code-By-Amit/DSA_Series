class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> set;

        for(int i=0; i<emails.size();i++){
            string s;
            bool isDomain = false;
            for(int j=0;j<emails[i].size();j++){
                if(emails[i][j] == '@') isDomain = true;
                if(emails[i][j] == '.' && !isDomain) continue;
                if(emails[i][j] == '+' && !isDomain){
                    while(j<emails[i].size() && emails[i][j+1] != '@') j++;
                    continue;
                };
                s += emails[i][j];
            }
            set.insert(s);
        }
        return set.size();
    }
};
