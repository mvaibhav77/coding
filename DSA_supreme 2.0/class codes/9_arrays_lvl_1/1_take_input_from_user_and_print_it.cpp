#include <bits/stdc++.h>
using namespace std;
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
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << " is : " << arr[i] << endl;
        ;
    }
    return 0;
}