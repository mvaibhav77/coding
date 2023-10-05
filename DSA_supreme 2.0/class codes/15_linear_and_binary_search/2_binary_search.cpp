#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2); // mid formulae

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else // means target is less than arr[mid]
        {
            end = mid - 1;
        }
        // update mid
        mid = start + ((end - start) / 2);
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]); // size of array = total size of array / size ofdata type of array
    int target = 90;
    int ans = binarySearch(arr, size, target);
    if (ans == -1)
    {
        cout << " not found : " << target << endl;
    }
    else
    {
        cout << "element found -> "
             << " at index : " << ans;
    }
    return 0;
}