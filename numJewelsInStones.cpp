// Optimal Approach Time Complexity O( M + N ) || space Complexity O(1)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int result = 0;
        unordered_set<char> jewels_set(jewels.begin(),jewels.end());
        for(char stone: stones){
            if(jewels_set.count(stone)) result++;
        }
        return result;
    }
};

// BruteForce Approach Time Complexity O( M * N ) || space Complexity O(1)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int result = 0;
         for(int i=0;i<jewels.size();i++){
             char ch = jewels[i];
             for(int j=0;j<stones.size();j++){
                 if(stones[j] == ch){
                     result+=1;
                 }
             }
         }
        return result;
    }
};
