class Solution {
  public:
    vector<int> calculateSpan(vector<int>& prices) {
        // code here
        int n = prices.size();
        vector<int> ans;
        stack<int> s;
        
        for(int i=0;i<n;i++){
            while(!s.empty() && prices[s.top()] <= prices[i]){
                s.pop();
            }
            
            if(s.empty()) ans.push_back(i+1);
            else ans.push_back(i-s.top());
            s.push(i);
        }
        
        return ans;
    }
};
