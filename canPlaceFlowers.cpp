class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int flowers) {
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        int n = flowerbed.size();

        for(int i=1; i< n-1; i++){
            if((flowerbed[i-1] + flowerbed[i] + flowerbed[i+1]) == 0){
                flowerbed[i] = 1;
                flowers--;
                i++;
            }
        }

        if(flowers <= 0) return true;
        return false;
    }

};
