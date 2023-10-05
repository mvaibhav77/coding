#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;
    for (int row = 0; row < size; row++)
    {
        // spaces

        for (int col = 0; col < size - row; col++)
        {
            cout << " ";
        }
        // stars

        for (int col = 0; col < row + 1; col++)
        {
            if (row != size - 1)
            {
                if (col == 0 || col == row + 1 - 1)
                {
                    cout << col + 1 << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                cout << col + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}