#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size=5;
    
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if(row+col<5)
            {
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}