#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        // ascii code for A :

        int num = 65;
        for (int j = 0; j < i + 1; j++)
        {
            cout << char(num) << " ";
            num++;

            // OR
            // char ch = j + 1 + 'A' - 1;
            // cout << ch++;

        }
        cout << endl;
    }
    return 0;
}