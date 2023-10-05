#include <bits/stdc++.h>
using namespace std;
int leftOcurrence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = 0;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // store answer
            ans = mid;
            // left side traverse
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            // traverse right side
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // traverse left side
            end = mid - 1;
        }
        // update mid
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int rightOcurrence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = 0;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // store answer
            ans = mid;
            // right side traverse for last occurence
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
            // traverse right side
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // traverse left side
            end = mid - 1;
        }
        // update mid
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int totalOccurences(int arr[], int size, int target)
{
    int leftoccurence = leftOcurrence(arr, size, target);

    int rightoccurence = rightOcurrence(arr, size, target);

    int totalOccurence = rightoccurence - leftoccurence + 1;

    return totalOccurence;
}
int main()
{

    int arr[] = {10, 20, 30, 30, 30, 40, 50, 60, 70};

    int size = sizeof(arr) / sizeof(arr[0]);
    // size of array = total size of array / size ofdata type of array

    int target = 30;

    cout << "total occurence : " << totalOccurences(arr, size, target) << endl;

    return 0;
}