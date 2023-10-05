#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[], int size, int target)
{
    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag++;
        }
    }
    return flag;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 4; // to find target in teh given array
    int ans = LinearSearch(arr, size, target);
    if (ans == 1)
    {
        cout << "Element Present !!";
    }
    else
    {
        cout << "Element Does Not Exist !";
    }
    return 0;
}