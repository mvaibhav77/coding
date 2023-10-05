#include <bits/stdc++.h>
using namespace std;
void shiftArray(int arr[], int size, int k)
{
    int ans[k];

    // copying the last elements of the array ina  new array
    for (int i = size - 1, newIndex = 0; newIndex < k; i--, newIndex++)
    {
        // copying elements
        ans[newIndex] = arr[i];
    }

    // shift by k places starting from the end
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - k];
    }

    // copying the left over elements
    for (int i = 0; i < k; i++)
    {
        arr[i] = ans[i];
    }

    // printing !!
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int k = 2;
    shiftArray(arr, size, k);
    return 0;
}