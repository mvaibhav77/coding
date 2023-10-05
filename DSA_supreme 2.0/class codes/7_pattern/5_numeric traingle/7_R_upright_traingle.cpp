#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size - 1 - row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }

        cout << endl;
    }
    return 0;
}