#include <bits/stdc++.h>
using namespace std;
void pairs(int arr[], int size)
{
    int count = 1;
    cout << "Array Elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "pair " << count++ << " : " << arr[i] << " " << arr[j] << endl;
        }
    }
}
int main()
{
    int arr[] = {10, 20, 30};
    int size = 3;
    pairs(arr, size);
    return 0;
}