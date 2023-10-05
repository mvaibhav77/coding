#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 4;

    // upper half

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0)
            {
                cout << row + 1;
            }
            else if (col == row + 1 - 1)
            {
                cout << row+1;
            }
            else
            {
                cout << row + 1 << "*";
            }
        }
        cout << endl;
    }

    // lower half

    for (int row = size; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            if (row == 1)
            {
                cout << row;
            }
            else if (col == row - 1)
            {
                cout << row;
            }
            else
            {
                cout << row << "*";
            }
        }
        cout << endl;
    }

    return 0;
}