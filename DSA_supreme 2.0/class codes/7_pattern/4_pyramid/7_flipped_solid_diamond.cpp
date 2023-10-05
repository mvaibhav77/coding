#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size=9;
    int n=4;
    for(int row=0;row<n;row++){
        
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        for(int col=0;col<(2*row)+1;col++){
            cout<<" ";
        }
        // same as first star loop 

        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        for(int col=0;col<(2*n)-(2*row)-1;col++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}