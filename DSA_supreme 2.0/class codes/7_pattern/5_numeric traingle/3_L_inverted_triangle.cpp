#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows = 5;
    int columns = 5;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if(i+j<5)
            {
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}