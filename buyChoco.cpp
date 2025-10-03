class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int first = INT_MAX;
        int second = INT_MAX;

        for(int p:prices){
            if(p <= first){
                second = first;
                first = p ;
            }else if (p < second && p != first){
                second = p;
            }
        }
        int cost = first + second;
        if(cost <= money) return money-cost;     
        return money;
    }
};
