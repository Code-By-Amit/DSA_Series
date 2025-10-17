class Solution {
public:
    bool isPossible(vector<int>& dist, double hour, int speed){
        double totalHours = 0;
        int n = dist.size();
        for(int i=0; i<n-1; i++){
            totalHours += (dist[i] + speed -1)/speed;
        }
        
        totalHours += (double)dist[n-1]/speed; // dont rount up for last trip
        return totalHours <= hour;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low = 1;
        int high = 1e9;
        int ans = -1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(isPossible(dist, hour, mid)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
