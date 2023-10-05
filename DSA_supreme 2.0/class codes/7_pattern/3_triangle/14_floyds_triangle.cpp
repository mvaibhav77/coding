#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size =5;
    int count=1;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout<<count++<<" ";
        }
        cout << endl;
    }
return 0;
}