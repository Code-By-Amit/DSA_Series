// BruteForce Approach   ||  Time Complexity O(n)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for(int p=1; p < arr.size()-1; p++){
            if(arr[p-1] < arr[p] && arr[p] > arr[p+1]){
                return p;
            }
        }
        return -1;
    }
};


// Optimized Approach using Binary Search || Time Complexity O(log n)  

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1;
        int end = arr.size() -2;
        while(st <= end){
            int mid = st + (end-st)/2;

             if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return mid;
            }
             else if(arr[mid] < arr[mid+1] ){
                st = mid +1;
            }else{
                end = mid-1;
            }
        }
        return -1;
    }
};
