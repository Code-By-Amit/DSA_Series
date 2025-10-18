class Solution {
public:
   bool canPlace(vector<int>& position, int totalBalls, int minDist) {   
        totalBalls-=1;  // already placed 
        int currentPos = position[0]; // store current postion of already stored
        
        for(int i=0; i<position.size(); i++){
            if(position[i] - currentPos >= minDist){
                currentPos = position[i];
                totalBalls-=1;
            }
            if(totalBalls == 0) return true;
        }
        return false;
   }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low = 1;
        int high = position.back()-position.front(); // max distance position ke highest and lowest tak he ho sakti h

        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(canPlace(position, m, mid)){
                ans = mid;
                low = mid+1;  // right search (distance ko badhao)
            }else{
                high = mid-1; // left search (distance ko kam karo)
            }
        }
        return ans;
    }
};
