#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            // to avoid star after the last number 
            
            if (col == row + 1 - 1)
            {
                cout << row + 1;
            }
            else
            {
                cout << row + 1 << "*";
            }
        }

        cout << endl;
    }
    return 0;
}