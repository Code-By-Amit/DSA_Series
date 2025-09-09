// Optimal Approach Time Complexity : O(n)  || Space Complexity: O(n)
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<bool> result(candies.size(),0);
          int maxCandies = INT_MIN;

          for(int i=0;i<candies.size();i++){
            if(candies[i] >maxCandies){
                maxCandies = candies[i];
            }
          }

          for(int i=0;i<candies.size();i++){
            if(candies[i] + extraCandies >= maxCandies){
                result[i] = true;
            }
          }
         return result;
    }
};

// Bruteforce approach
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<bool> result(candies.size(),0);
         
         for(int i=0; i<candies.size();i++){
            bool isGretest = false;
            int currentGretest = candies[i] + extraCandies;
            for(int j=0; j<candies.size();j++){
                if(currentGretest < candies[j]){
                    isGretest = false;
                    break;
                }else{
                    isGretest = true;
                }
            }
            result[i] = isGretest;
         }
         return result;
    }
};
