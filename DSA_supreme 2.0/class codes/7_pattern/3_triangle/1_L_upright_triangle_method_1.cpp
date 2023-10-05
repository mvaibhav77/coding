#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (col <= row) // condition to print stars  Or can have j from 0 -> i+1 in for loop 
            {
                cout << " * ";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}