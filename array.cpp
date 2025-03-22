#include <iostream>
#include <climits>

using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int findMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    cout << "Max no of arr: " << findMax(arr, size) << endl;
    cout << "Min no of arr: " << findMin(arr, size) << endl;

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
