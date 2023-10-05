#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int Sum(int arr[][3], int row, int col)
{
    int sum = 0;

    for (int i = 0; i < col; i++)
    {

        for (int j = 0; j < row; j++)
        {
            if (i + j == 2)
            {
                sum += arr[i][j];
            }
        }
    }

    return sum;
}

int main()
{
    // matrix
    int arr[3][3] = {
        {1, 2, 7},
        {3, 4, 8},
        {5, 6, 9}};
    int row = 3;
    int col = 3;
    int target = 10;

    int ans = Sum(arr, row, col);
    cout << " sum of diagonal elements is : " << ans;

    return 0;
}
