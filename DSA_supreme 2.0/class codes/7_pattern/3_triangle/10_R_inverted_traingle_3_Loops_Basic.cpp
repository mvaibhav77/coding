#include <bits/stdc++.h>
using namespace std;
int main()
{
    // using three loops basic of L Increasing and Decreasing Codes

    // rows
    for (int i = 0; i < 5; i++)
    {
        // spaces
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }
        // stars
        for (int k = i; k < 5; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}