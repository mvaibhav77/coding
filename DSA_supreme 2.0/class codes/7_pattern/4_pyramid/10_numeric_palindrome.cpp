#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int flag = 0;
    int size = 5;
    int count;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size - 1 - row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            count = col + 1;
            
            cout << count;
        }
        if (count > 0)
        {
            for (int c = count; c > 1;)
            {
                c--;
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}