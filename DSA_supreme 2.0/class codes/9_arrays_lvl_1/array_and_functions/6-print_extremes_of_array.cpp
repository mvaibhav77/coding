#include <bits/stdc++.h>
using namespace std;
void extremes(int arr[], int size)
{
    int left = 0;

    int right = size - 1;

    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left]<<" ";;
        }
        else
        {
            cout << arr[left] << " " << arr[right]<<" ";
        }
        left++;
        right--;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    extremes(arr, size);
    return 0;
}