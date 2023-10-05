#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (row != 0)
            {
                if (col == 4 || row == col)
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
                cout<<" * ";
            }
        }
        cout << endl;
    }
    return 0;
}