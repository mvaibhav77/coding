#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            // if not first row

            if (i != 0)
            {
                // first column
                if (j == 0)
                {
                    cout << i + 1<<" ";
                }
                else if (i + j == 4)
                {
                    cout << '5';
                }
                else
                {
                    cout << "  ";
                }
            }
            // first row
            else
            {
                cout << j + 1<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}
