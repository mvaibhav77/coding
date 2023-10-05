#include <bits/stdc++.h>
using namespace std;
int missingElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            // go to right side to check others
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }
    if (ans + 1 == 0)
    {
        return size + 1; // when size is 8 and the missing element is 9 matlab  the last element
    }
    else
    {
        return ans + 1;
    }
}
int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 9};
    int size = 8;
    int ans = missingElement(arr, size);
    cout << "missing element is : " << ans;
    return 0;
}