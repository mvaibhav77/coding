#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << " is : " << arr[i] << endl;
    }
}
int main()
{
    int arr[5];
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter The " << i + 1 << " Element : ";
        cin >> arr[i];
    }

    cout << endl;

    print(arr, size);

    return 0;
}