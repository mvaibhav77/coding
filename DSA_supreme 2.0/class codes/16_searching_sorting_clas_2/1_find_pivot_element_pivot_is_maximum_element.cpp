#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        // single element case
        if (start == end)
        {
            return start;
        }

        // yahan mai glti krne wala hu : to chck valid index is important

        else if ((mid + 1) < size && arr[mid] > arr[mid + 1])
        // mid : 16 & mid +1 : 2
        {
            return mid;
        }

        // yahan mai glti krne wala hu : to chck the valid index

        else if ((mid - 1) > 0 && arr[mid] < arr[mid - 1])
        // mid - 1 : 16 & mid : 2
        {
            return mid - 1;
        }
        else if (arr[start] > arr[mid])
        {
            end = mid - 1; 
        }
        else
        {
            start = mid + 1;
        }
        mid = start * ((end - start) / 2);
    }
    return -1;
}

int binarySearch(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    int size = start + end + 1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int Search(int arr[], int size, int target)
{
    int pivotIndex = pivot(arr, size);
    // cout << "inside search pivot index: " << pivotIndex << endl;

    int ans = -1;

    if (target >= arr[0] && target <= arr[pivotIndex])
    {
        ans = binarySearch(arr, 0, pivotIndex, target);
    }
    else // means key is between  target >= arr[pivotIndex + 1] && target <= arr[size - 1]
    {
        ans = binarySearch(arr, pivotIndex + 1, size - 1, target);
    }
    return ans;
}

int main()
{
    // [2,4,6,8,10,12,14,16] sorted arrray

    // [12,14,16,2,4,6,8,10]  rotated sorted array rotated 3 times here

    int arr[] = {12, 14, 16, 2, 4, 6, 8, 10};
    int size = 8;

    // int pivotIndex = pivot(arr, size);
    // cout << " pivot index is: " << pivotIndex << endl;

    int target = 6;

    int ans = Search(arr, size, target);
    if (ans == -1)
    {
        cout << "element doe not exist in the array !";
    }

    else
    {
        cout << "index for element : " << ans;
    }

    return 0;
}