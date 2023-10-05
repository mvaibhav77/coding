#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < row + 1; col++) // move till (i+1)
        {
            if (row != 4)
            {
                if (col == row + 1 - 1)
                {
                    cout << col + 1 << " ";
                }
                else if (col == 0)
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