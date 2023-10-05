#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;
    for (int row = 0; row < size; row++)
    {
        // spaces

        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // stars

        for (int col = 0; col < size - row; col++)
        {
            // first / last column pe stars only
            
            if (col == 0 || col == size - row -1)
            {
                cout << "* ";
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