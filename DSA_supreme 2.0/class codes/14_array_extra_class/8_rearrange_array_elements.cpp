#include <bits/stdc++.h>
using namespace std;
void reaarrange(int arr[], int size)
{
    int ans[size];
    int index = 0;
    int evenIndex = 0;
    int oddIndex = 1;

    while (index < size)
    {
        if (arr[index] > 0)
        {
            ans[evenIndex] = arr[index];
            evenIndex += 2;
        }
        index++;
    }

    index = 0;

    while (index < size)
    {
        if (arr[index] < 0)
        {
            ans[oddIndex] = arr[index];
            oddIndex += 2;
        }
        index++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    // we need ot arrange the given array such that :

    // 1) the consecutive pairs have opposite sign ,
    // 2) the order fo the elements of the array must be the same ,
    // 3) array starts witha  positive number

    int arr[] = {3, 1, -2, -5, 2, -4};
    int size = 6;
    reaarrange(arr, size);

    return 0;
}