#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 4;

    int count = 1;

    // upper half

    for (int row = 0; row < size; row++)
    {

        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 0)
            {

                cout << count++; // last count is 10
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    int start = count - size; // 11 - 4 = 7

    // cout<<start << endl;

    // lower half

    for (int row = size - 1; row >= 0; row--)
    {
        int count = start; // 7 on first run

        for (int col = 0; col < (2 * row) + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << count++;

                // current value is 11 after the first row print  7*8*9*10
            }
            else
            {
                cout << "*";
            }
        }

        start = start - row;

        cout << endl;
    }

    return 0;
}