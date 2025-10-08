class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
      sort(potions.begin(),potions.end());
      vector<int> ans;

      for(int spell: spells){
        int lp=0; 
        int rp = potions.size()-1;
        int idx = potions.size();
        while(lp<=rp){
            int mid = lp + (rp-lp)/2; 
            long long product = (long long)spell * potions[mid];
            if(product >= success){
                idx = mid;
                rp=mid-1;
            }else lp = mid+1;
        }
        ans.push_back(potions.size() - idx);
      }
      return ans;
    }
};
