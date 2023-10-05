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
            cout << row + 3;
        }
        cout << endl;
    }

    // lower half

    for (int row = size - 1; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout << row + 2;
        }
        cout << endl;
    }

    return 0;
}