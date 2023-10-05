#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 30;
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = linearSearch(arr, size, target);
    if (ans == -1)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "element " << target << " found at index : " << ans << endl;
    }

    return 0;
}