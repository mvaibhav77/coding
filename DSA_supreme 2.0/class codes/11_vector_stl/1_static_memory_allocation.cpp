#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // static memory allocation
    int size = 5;
    print(arr, size);
    return 0;
}