#include <bits/stdc++.h>
using namespace std;
int bs(int arr[], int start, int end, int element)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int expSearch(int arr[], int size, int element)
{
    if (arr[0] == element)
    {
        return 0; // the index
    }
    int i = 0;
    int j=1;

    // selecting a subarray from a large array through this !! 
    while (j < size && arr[j] <= element)
    {
        i=j;
        j = j * 2;
    }

    // reutrning min of i and size - 1 becoz if the i exceeds the index bounds toh voh array toh exist hee nhi krega after size-1 index toh aise case mei to find the last index we find the min of i and the last index which will be the last index of the array

    // EG : if 56 element hai -> last i would be i=16 ,, start will be i/2 = 8 but the 16 index dne so we return the end index as the min of (16,9) which is 9

    return bs(arr, i, min(j, size - 1), element);
}
int main()
{
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int size = 10;
    int element = 56;
    int ans = expSearch(arr, size, element);
    if (ans != -1)
    {
        cout << "Index of Element " << element << " is : " << ans << endl;
    }
    else
    {
        cout << " answer not found !!";
    }
    return 0;
}