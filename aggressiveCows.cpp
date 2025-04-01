bool cowWePlace(vector<int> arr,int cows,int minAllowedDist){
    int cowsCount = 1; 
    int stallCordinate = arr[0];

    for(int i =0; i<arr.size();i++){
        if((arr[i] - stallCordinate) >= minAllowedDist){
            cowsCount++;
            stallCordinate = arr[i];
        }
    if(cowsCount == cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int cows)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low =1;
    int high = stalls[n-1] - stalls[0];

    while(low<=high){
        int mid = low + (high-low)/2;
        if(cowWePlace(stalls,cows,mid)){
            low = mid +1;
        }else{
            high = mid-1;
        }
    }
    return high;
}
