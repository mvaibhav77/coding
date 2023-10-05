#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows = 5;
    int columns = 5;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < columns - row; col++)
        {
            if (row == 0)
            {
                if (row + col < 5)
                {
                    cout << col + 1 << " ";
                }
            }
            else if (col == columns - row - 1)
            {
                cout << '5';
            }
            else if (col == 0)
            {
                cout << row + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}