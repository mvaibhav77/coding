#include <iostream>
using namespace std;

bool linearSearch(int arr[][3], int row, int col, int target)
{
    int flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
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

    bool ans = linearSearch(arr, row, col, target);

    if (ans == 1)
    {
        cout << "element Found" << endl;
    }
    else
    {
        cout << "element Not Found" << endl;
    }
    return 0;
}
