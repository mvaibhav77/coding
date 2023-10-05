#include <bits/stdc++.h>
using namespace std;
int Min(int arr[], int size)
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
int Max(int arr[], int size)
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
int main()
{
    int arr[6] = {2, 4, 6, 8, 10, 37};
    int size = 6;
    int minimum = Min(arr, size);
    cout << "minimum value is : " << minimum << endl;
    int maximum = Max(arr, size);
    cout << "maximum value is : " << maximum << endl;
    return 0;
}