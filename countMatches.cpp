class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int result = 0;
          int index = (ruleKey == "type") ? 0 : (ruleKey == "color") ? 1 : 2;
        for (int i = 0; i < items.size(); i++) {
            if (items[i][index] == ruleValue) result++;
        }
        return result;
    }
};


// Other Simple Way with same Time complexity and Space Complexity
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int result = 0;
    
        for (int i = 0; i < items.size(); i++) {
            if (ruleKey == "type") {
                if (ruleValue == items[i][0])
                    result++;
            } else if (ruleKey == "color") {
                if (ruleValue == items[i][1])
                    result++;
            } else if (ruleKey == "name") {
                if (ruleValue == items[i][2])
                    result++;
            }
        }
        return result;
    }
};
