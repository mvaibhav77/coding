#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size - row; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}