#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;
    for (int row = 0; row < size; row++)
    {
        int count = row + 1;

        for (int col = 0; col < size - 1 - row; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << count++ << " "; // count -> 4 after row 2
        }

        count--;
        for (int c = count; count > row + 1;)
        {
            count--;
            cout << count << " ";
        }

        cout << endl;
    }
    return 0;
}