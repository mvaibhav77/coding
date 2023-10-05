#include <bits/stdc++.h>
using namespace std;

// HERE WE SHIFT ARRAY ELEMENTS AND NOT SWAP THEM

// printing array
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// insertion sort
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    // i starts form 1 -> ( <= n-1 )
    {
        // FIRST ITERATION

        int key = arr[i]; // key has arr[1]
        int j = i - 1;    // j=0
        while (j >= 0 && arr[j] > key)
        // j=0 && arr[0] > key : 5 > 4
        {
            arr[j + 1] = arr[j]; // arr[1]=5;
            j--;                 // j=-1;
        }
        arr[j + 1] = key;
        // arr[0] = key : arr[0] = 4
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = 5;
    insertionSort(arr, size);
    print(arr, size);
    return 0;
}