class Solution {
public:
    bool canEat(vector<int>& piles, int h,int k){
        long int totalHours = 0;
        for(int i=0; i<piles.size();i++){
            totalHours += ((long long)piles[i] + k -1)/k;
        }
        return totalHours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        int k = -1;
        for(int i:piles) high = max(i,high);

        while(low <= high){
            int mid = low + (high-low)/2;
            if(canEat(piles,h,mid)){        // left
                high = mid - 1;
                k = mid;
            }else{      // right
                low = mid+1;
            }
        }
        return k;
    }
};
