#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Time Complextiy is O(n^2)


void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
            if (!isSwap) return; // For Some Rare Cases Where Array is Already Sorted
        }
    }
}

void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i< n-1; i++){
        int smallestIndex = i;
        for(int j=i+1; j<n; j++){
           if(arr[j] < arr[smallestIndex]){
            smallestIndex = j;
          }   
        }
        swap(arr[i],arr[smallestIndex]);
    }
}

void insertionSort(vector<int> &arr){
    int previous;
    for(int i = 1; i<arr.size();i++){
       int current = arr[i];
       previous = i-1;
       while(previous >= 0 && arr[previous] > current){
        arr[previous+1] = arr[previous];
        previous--;
       }
       arr[previous+1] = current;
    }
}

int main()
{
    vector<int> arr = {4, 2, 1, 3, 6};
    bubbleSort(arr);
    // selectionSort(arr);
    // insertionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}
