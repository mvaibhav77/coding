#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8;

    for (int row = 0; row <= n / 2; row++)
    {
        // left inverted triangle
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        // center pyramid
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0)
            {
                cout << row + 1;
            }
            else
            {
                if (col == row + 1 - 1)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << row + 1 << "*";
                }
            }
        }
        // right inverted triangle
        for (int col = row; col < n; col++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}