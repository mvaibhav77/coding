#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

void Sum(int arr[][3], int row, int col)
{

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << " sum for column " << i << " is : " << sum << endl;
    }
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

    Sum(arr, row, col);

    return 0;
}
