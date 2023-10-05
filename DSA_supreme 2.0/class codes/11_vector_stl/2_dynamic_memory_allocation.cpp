#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "element at index " << i << " is : " << arr[i] << endl;
    }
}
void input(int arr[], int size) // inpurt aise hee le skte hai dynamic array mei
{
    for (int i = 0; i < size; i++)
    {
        cout << "enter the " << i + 1 << " element : ";
        cin >> arr[i];
    }
    cout << endl;
}
int main()
{
    int size;
    cout << " enter the size of array : ";
    cin >> size;
    int *arr = new int[size]; // dynamic memory allocation

    input(arr, size);

    print(arr, size);
    return 0;
}