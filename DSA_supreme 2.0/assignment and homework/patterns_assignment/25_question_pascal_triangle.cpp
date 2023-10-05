#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int row = 1; row <= 7; row++)
    {
        int count = 1;

        for (int col = 1; col <= row; col++)
        {
            cout << count << " ";

            count = count * (row - col) / col; 
            
            // formulawe ofm pascal traingle
        }
        cout << endl;
    }

    return 0;
}