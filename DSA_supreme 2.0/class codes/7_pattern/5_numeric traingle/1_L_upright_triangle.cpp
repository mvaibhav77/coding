#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j <= i) // condition to print stars  Or can have j from 0 -> i+1 in for loop 
            {
                cout << j+1<<" ";
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