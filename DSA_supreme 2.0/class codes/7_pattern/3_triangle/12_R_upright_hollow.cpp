#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (row != size - 1)
            {
                if (col == 4 || row + col == 4)
                {
                    cout << " * ";
                }
                else
                {
                    cout << "   ";
                }
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }
    return 0;
}