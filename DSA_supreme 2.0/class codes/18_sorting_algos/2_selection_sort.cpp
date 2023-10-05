#include <bits/stdc++.h>
using namespace std;

// printing array
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Selection Sort
void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // taking the first one as the minimum
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        // comparing if there are other samller number than the number at the min index
        {
            if (arr[minIndex] > arr[j])
            {
                // assigning that index as the minIndex
                minIndex = j;
            }
        }
        // sawpping the so called minimum declared number with the smallest number found after traversing the whole array
        swap(arr[i], arr[minIndex]);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = 5;
    SelectionSort(arr, size);
    print(arr, size);
    return 0;
}