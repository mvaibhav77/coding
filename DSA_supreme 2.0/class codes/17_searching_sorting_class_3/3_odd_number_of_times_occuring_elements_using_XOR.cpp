#include <bits/stdc++.h>
using namespace std;

// using O (n) -> time linear se XOR use krke

int occuring(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    // the elements occur in pairs except one of them occurs odd number of times

    // non adjacent to each other

    int arr[] = {1, 1, 5, 5, 2, 2, 4, 4, 3, 3, 2, 6, 6};
    int size = 13;
    int ans = occuring(arr, size);
    cout << ans;
    return 0;
}