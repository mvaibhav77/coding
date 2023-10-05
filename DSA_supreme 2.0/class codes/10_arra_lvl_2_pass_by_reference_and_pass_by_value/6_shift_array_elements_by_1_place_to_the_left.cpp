#include <bits/stdc++.h>
using namespace std;
void shift(int arr[], int size)
{
    int temp = 0;
    int start = 0;
    int end = size - 1;
    temp = arr[start];
    for (int i = start; i < end; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[end] = temp;

    cout << "Left Shift By 1 Place : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    shift(arr, size);
    return 0;
}