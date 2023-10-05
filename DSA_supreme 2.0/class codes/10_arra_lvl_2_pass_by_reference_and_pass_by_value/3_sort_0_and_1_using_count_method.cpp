#include <bits/stdc++.h>
using namespace std;
void Count(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    // sorting 0s & 1s respectively !!

    int index = 0;

    while (zeroCount > 0) // or (zeroCount--) means the same
    {
        arr[index] = 0;
        index++;
        zeroCount--;
    }
    while (oneCount > 0) // or (oneCount--) means the same
    {
        arr[index] = 1;
        index++;
        oneCount--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 0, 0, 1, 1, 1, 1, 1};
    int size = 8;
    Count(arr, size);
    return 0;
}