#include <bits/stdc++.h>
using namespace std;
void rows(int arr[][4], int row, int col)
{
    int rownum = 0;
    int totalCount = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        int count = 0;
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > totalCount)
        {
            totalCount = count;
            rownum = i;
        }
    }

    cout << " row number : " << rownum << endl
         << "number of 1s : " << totalCount << endl;
}
int main()
{
    int arr[5][4] = {
        {1, 0, 0, 0},
        {0, 1, 1, 0},
        {1, 1, 1, 0},
        {0, 0, 1, 0},
        {0, 1, 1, 0}};

    int row = 5;
    int col = 4;
    rows(arr, row, col);
    return 0;
}