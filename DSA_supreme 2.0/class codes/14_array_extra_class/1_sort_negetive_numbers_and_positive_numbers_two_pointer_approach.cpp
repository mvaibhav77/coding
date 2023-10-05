#include <bits/stdc++.h>
using namespace std;
void sort(int arr[], int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[index]);
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
    int arr[] = {-59, 47, 0, 39, -4, -63, 79, 90, -100};
    int size = 9;

    sort(arr, size);
    return 0;
}