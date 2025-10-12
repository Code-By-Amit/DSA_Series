#include<vector>
#include<iostream>

using namespace std;

int partition(vector<int> &arr, int st,int end){
    int idx = st-1;
    int pivot = arr[end];
    int j = 0;

    for(int j=st; j<end;j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[idx] , arr[j]);
        }
    }

    idx++;
    swap(arr[idx] , arr[end]);
    return idx;
}

void quickSort(vector<int> &arr, int st, int end){
    if(st<end){
        int pivIdx = partition(arr, st, end);
        quickSort(arr, st , pivIdx-1);// left
        quickSort(arr, pivIdx+1, end); // right
    }
}

int main(){
    vector<int> arr = {3,5,6,84,9,4};
    
   quickSort(arr,0,arr.size()-1);
    for(int i:arr){
        cout << i << " ";
    }

    return 0;
}
