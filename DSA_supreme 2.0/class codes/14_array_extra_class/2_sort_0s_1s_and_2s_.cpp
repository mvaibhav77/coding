#include <bits/stdc++.h>
using namespace std;
void count(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    int index = 0;

    while (index <= right)
    {
        if (arr[index] == 0)
        {
            swap(arr[index], arr[left]);
            left++;
            index++;
        }
        else if (arr[index] == 2)
        {
            swap(arr[index], arr[right]);
            right--;
            // index++ nahi akrenge as we swap with the right most element which can also be 2 so we need to check if its 2 or not first !!
        }
        else
        {
            index++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 1, 2, 2, 0, 1, 2, 0};
    int size = 9;
    count(arr, size);
    return 0;
}