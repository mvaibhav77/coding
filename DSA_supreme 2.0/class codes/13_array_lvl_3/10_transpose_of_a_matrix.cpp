#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

void Transpose(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
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

    Transpose(arr, row, col);

    return 0;
}
