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
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of Elements is : " << sum << endl;
    return 0;
}