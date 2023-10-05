#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[3][3], int row, int col, int target)
{
    int size = row * col;
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2); // mid formulae

    while (start <= end)
    {

        // coversionb of 1D -> 2D array we get the row and column index as follows:
        int rowIndex = mid / col;
        int columnIndex = mid % col;

        int currentNumber = arr[rowIndex][columnIndex];

        if (currentNumber == target)
        {
            return mid;
        }
        else if (target > currentNumber)
        {
            start = mid + 1;
        }
        else // means target is less than arr[mid]
        {
            end = mid - 1;
        }
        // update mid
        mid = start + ((end - start) / 2);
    }
    return -1;
}
int main()
{
    int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int row = 3;
    int col = 3; // size of array = total size of array / size ofdata type of array
    int target = 60;
    int ans = binarySearch(arr, row, col, target);
    if (ans == -1)
    {
        cout << " not found : " << target << endl;
    }
    else
    {
        cout << "element found -> "
             << "at index: " << ans;
    }
    return 0;
}