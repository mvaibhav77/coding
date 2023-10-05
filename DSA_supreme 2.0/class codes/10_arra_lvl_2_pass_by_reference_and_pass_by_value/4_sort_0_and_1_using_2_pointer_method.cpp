#include <bits/stdc++.h>
using namespace std;
void sort(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    int index = 0;

    while (left <= right)
    {
        if (arr[index] == 0)
        {
            swap(arr[index], arr[left]);
            left++;
            index++;
        }
        else if (arr[index] == 1)
        {
            swap(arr[index], arr[right]);
            right--;
            // index aage nahi badhana hai maybe 1 ke sath hee swap kardiya ho
            // so we can not move forward until swapped with a zero
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 1, 0, 0, 1, 1, 1, 1};
    int size = 9;
    sort(arr, size);
    return 0;
}