#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i+1; j++) // move till (i+1)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
return 0;
}