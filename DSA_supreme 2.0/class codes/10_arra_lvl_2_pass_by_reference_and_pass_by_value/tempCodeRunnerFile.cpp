#include <bits/stdc++.h>
using namespace std;
void shift(int arr[], int size)
{
    int temp = 0;
    int start = 0;
    int end = size - 1;
    temp = arr[end];
    for (int i = end; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[start] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    shift(arr, size);
    return 0;
}