// Total Time Complexity: O(n + m) || Space Complexity: O(n)
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        int minSum = INT_MAX;
        unordered_map<string, int> map;
        for (int i = 0; i < list1.size(); i++) map[list1[i]] = i;

        for (int j = 0; j < list2.size(); j++) {
            if (map.find(list2[j]) != map.end()) {
                int sum = map[list2[j]] + j;
                if (sum < minSum)
                    ans.clear();
                if (sum <= minSum) {
                    ans.push_back(list2[j]);
                    minSum = min(minSum, sum);
                }
            }
        }
        return ans;
    }
};

// Total Time Complexity: O(n × m) || Space Complexity: O(1) (ignoring result vector)
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1,
                                  vector<string>& list2) {
        vector<string> ans;
        int minSum = INT_MAX;
        for (int i = 0; i < list1.size(); i++) {
            for (int j = 0; j < list2.size(); j++) {
                if (list1[i] == list2[j]) {
                    int sum = i + j;
                    if (sum < minSum) ans.clear();
                    if(sum <= minSum){
                        ans.push_back(list1[i]);
                        minSum = min(minSum, sum);
                    }
                }
            }
        }
        return ans;
    }
};
