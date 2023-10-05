#include <bits/stdc++.h>
using namespace std;
int peek(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start < end) // NO = AS WHENEVER WE DO things like end = mid  instead of mid-1 / +1  etc .. we can get stuck in infinte loop due to the equal to condition hence we remove it !!
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + ((end - start) / 2);
    }
    return start;
}
int main()
{
    int arr[] = {10, 20, 50, 40, 30};
    int size = 5;
    int ans = peek(arr, size);
    cout << "PEEK INDEX : " << ans;
    return 0;
}