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
int main()
{

    int arr[] = {10, 20, 30, 30, 30, 40, 50, 60, 70};

    int size = sizeof(arr) / sizeof(arr[0]);
    // size of array = total size of array / size ofdata type of array

    int target = 30;

    int ans = leftOcurrence(arr, size, target);
    if (ans == 0)
    {
        cout << " element not found !!" << endl;
    }
    else
    {
        cout << " first occurence of " << target
             << " at index : " << ans;
    }

    return 0;
}