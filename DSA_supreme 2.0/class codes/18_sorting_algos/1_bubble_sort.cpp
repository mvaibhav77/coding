#include <bits/stdc++.h>
using namespace std;

// HERE WE SWAP TEH ADJACENT ARRAY ELEMENTS IF THE PRIOR ONE IS GREATER THAN THE SUCCEDING ONE

// printing array
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Bubble Sort sort
void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    // we start and traverse the whole array
    {
        for (int j = 0; j < size - 1 - i; j++)
        // j goes until the size-1-i index as in each iteration the largest element gets placed at its correct position
        {
            if (arr[j] > arr[j + 1])
            // condition checking
            {
                // swapping
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = 5;
    BubbleSort(arr, size);
    print(arr, size);
    return 0;
}