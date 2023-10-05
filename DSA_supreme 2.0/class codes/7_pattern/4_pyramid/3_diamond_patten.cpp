#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter Number Of  Rows : "<<endl;
    cin>>n;
    int size = n/2;
    for (int row = 0; row < size; row++)
    {
        // spaces

        for (int col = 0; col < size - row - 1; col++)
        {
            cout << " ";
        }
        // stars

        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < size; row++)
    {
        // spaces

        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // stars

        for (int col = 0; col < size - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}