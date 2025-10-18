class Solution {
public:
    bool isCapacityPossible(vector<int>& weights, int days, int minWeight) {
        int daysToShip = 1;
        int totalWeight = 0;
        for(int weight:weights){
            if(weight > minWeight) return false;
            if(totalWeight + weight <= minWeight){
               totalWeight+=weight;
            }else{
                totalWeight=weight;
                daysToShip += 1;
            }
        }
        return daysToShip <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = 1;
        int high = 0;
        for(int i:weights) high+=i;
        int ans = -1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(isCapacityPossible(weights,days,mid)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
