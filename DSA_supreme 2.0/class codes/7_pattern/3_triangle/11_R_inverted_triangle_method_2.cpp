#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int row = 0;row<5;row++)
    {
        for(int col=0;col<5;col++)
        {
            if(row!=0)
            {
                if(col==4||row<=col)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
return 0;
}