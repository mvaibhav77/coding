#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col <= size - 1; col++)
        {

            if (row != size - 1)
            {
                if (col == 0 )
                {
                    cout << "1 ";
                }
                else if (row == col)
                {
                    cout<<row+1;
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                cout << col+1<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}