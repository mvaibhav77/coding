#include <bits/stdc++.h>
using namespace std;
int uniqueElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i]; // XOR of all elements negates the repeating elements
    }
    return ans;
}
int main()
{
    int arr[] = {2, 10, 11, 13, 10, 2, 15, 13, 15};
    int size = 9;
    int ans = uniqueElement(arr, size);
    cout << "The Unique Element Is : " << endl;
    cout << ans;
    return 0;
}