#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 5;

    // upper half

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0)
            {
                cout << "*";
            }
            else if (col == row + 1 - 1)
            {
                cout << "*";
            }
            else
            {
                cout << "*";
            }
        }

        //  inverted blank pyramid top wala

        for (int col = 0; col < (2 * size) - (2 * row) - 2; col++)
        {
            cout << " ";
        }

        // right upright traingle

        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // ______________________________________________________________

    //

    // lower half

    for (int row = size; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            if (row == 1)
            {
                cout << "*";
            }
            else if (col == row - 1)
            {
                cout << "*";
            }
            else
            {
                cout << "*";
            }
        }

        // spaces

        for (int col = 0; col < (2 * size) - (2 * row); col++)
        {
            cout << " ";
        }

        // right inverted traingle

        for (int col = row; col > 0 ; col--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}