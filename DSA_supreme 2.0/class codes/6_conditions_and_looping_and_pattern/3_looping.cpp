#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i <= 3; i++)
    {
        cout
            << " Outer Loop : " << i << endl;

        for (int j = 0; j <= 3; j++)
        {
            cout << " "
                 << " Inner Loop : " << j << endl;
        }
    }
    return 0;
}