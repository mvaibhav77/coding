#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col <= size - 1 - row; col++)
        {
            // not first row
            if (row != 0)
            {
                if (col == 0 || row + col == 4)
                {
                    cout << " * ";
                }
                else
                {
                    cout << "   ";
                }
            }
            else if (row == 0) // first row
            {
                cout << " * ";
            }

            // if(row==0||row==size-1)
            // {
            //     cout << " * ";
            // }else {
            //     if(col==0||col==size-1){
            //         cout<<" * ";
            //     }
            //     else{
            //         cout<<" ";
        }
        cout << endl;
    }
    return 0;
}