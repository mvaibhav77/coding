#include <bits/stdc++.h>
using namespace std;
bool isPosiible(long long int arr[], long long int size, long long int MinimumWood, long long int mid)
{
    long long int WoodCollected = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > mid)
        {
            WoodCollected += arr[i] - mid;
        }
    }
    return WoodCollected >= MinimumWood;
}
long long int SawHeight(long long int arr[], long long int size, long long int Trees, long long int MinimumWood)
{
    int start = 0;
    int end = *max_element(arr, arr + size);
    // cout << end << endl;
    int ans = -1;

    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;

        if (isPosiible(arr, size, MinimumWood, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    long long int Trees = 4;
    long long int MinimumWood = 7;
    long long int arr[] = {20, 15, 10, 17};
    long long int size = 5;
    long long int ans = SawHeight(arr, size, Trees, MinimumWood);

    // cout << "maximum height of the saw is : " << ans;

    cout << "maximum heightt of the saw is : ";
    cout << ans;
}