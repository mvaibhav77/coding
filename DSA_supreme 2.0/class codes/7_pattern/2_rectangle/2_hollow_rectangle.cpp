#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int row = 0; row < 3; row++) // row
    {
        for (int column = 0; column <8 ; column++) // column
        {
            if (row == 0 || row == 2)
            {
                cout << " * "; // total 3 space used
            }
            else
            {
                if (column == 0 || column == 7)
                {
                    cout << " * "; // total 3 space used 
                }
                else
                {
                    cout << "   "; // 3 spaces
                }
            }
        }
        cout << endl;
    }
    return 0;
}
