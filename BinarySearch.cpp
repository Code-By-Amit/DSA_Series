#include <vector>
#include <iostream>
using namespace std;

int BinarySearch(vector<int> arr,int target){
    int st = 0;
    int end = arr.size()-1;
    
    while(st <= end){
        int mid = st + (end-st)/2;
        if(arr[mid] > target){
            end = mid-1;
        }else if(arr[mid] < target){
            st = mid+1;
        }else if(arr[mid] == target){
            return mid;
        }
    }
    return -1;
}

int recBinarySearch(vector<int> arr,int target, int st, int end){
    if(st <= end){
       int mid = st + (end-st)/2;
        if(arr[mid] > target){
            return recBinarySearch(arr,target,st,mid-1);
        }else if(arr[mid] < target){
            return recBinarySearch(arr,target,mid+1,end);
        }else if(arr[mid] == target){
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1,0,3,4,5,9,12}; // for odd
    int tar1 = 12;
    cout << BinarySearch(arr,tar1) << endl;

    vector<int> arr2 = {-1,0,3,4,5,12}; // for Even
    int tar2 = 0;
    cout << recBinarySearch(arr2,tar2,0,arr2.size()-1);
    return 0;
}