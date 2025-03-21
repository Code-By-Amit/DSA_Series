#include <iostream>
#include <climits>

using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {3, 4, 6, 2, 5, 7, -15};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before: ";
    printArray(arr, size);

    reverseArr(arr, size);

    cout << "Array after reverse: ";
    printArray(arr, size);

    // int smallest = INT_MAX;
    // int smallestindex;
    // for (int i = 0; i < (sizeof(arr) / 4); i++)
    // {
    //     if (arr[i] < smallest)
    //     {
    //         smallest = arr[i];
    //         smallestindex = i;
    //     }
    // }
    // cout << "Smallest of Array is: " << smallest << " Index: " << smallestindex << endl;
    return 0;
}
