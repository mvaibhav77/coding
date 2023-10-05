#include <bits/stdc++.h>
using namespace std;
void shiftArray(int arr[], int size, int k)
{
    int ans[size];
    int index = 0;

    while(index<size)
    // 0 -> 2 , 1 -> 3 , 2 -> 4 , 4 -> 0 , 5 -> 1
    {
        int newIndex = (index + k) % size;
        //(0+2)%6 = newIndex : 2      index = 0
        //(1+2)%6 = newIndex : 3      index = 1
        //(2+2)%6 = newIndex : 4      index = 2
        //(3+2)%6 = newIndex : 5      index = 3
        //(4+2)%6 = newIndex : 0      index = 4
        //(5+2)%6 = newIndex : 1      index = 5
        ans[newIndex] = arr[index];
        index++;
        newIndex++;
    }

    // print answer array

    for (int i = 0; i < size; i++)
    {
        cout << ans[i]<<" ";
    }
    cout << endl;

    // if questions says to give the O/P WITH the same array then we do this

    // for (int i = 0; i < size; i++)
    // {
    //     arr[i] = ans[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int shift = 2;
    shiftArray(arr, size, shift);
    return 0;
}