#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 4;

    // upper half

    for (int row = 0; row < size; row++)
    {
        int num = 1;

        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0)
            {
                cout << "*";
            }
            else
            {
                cout << num++;
            }
        }
        num--;
        for (int count = num; count >= 1;)
        {
            count--;

            if (count < 1)
            {
                cout << "*";
            }
            else
            {
                cout << count;
            }
        }
        cout << endl;
    }

    // lower half
    for (int row = size - 1; row > 0; row--)
    {
        int num = 1;
        for (int col = 0; col < row; col++)
        {
            if (col == 0)
            {
                cout << "*";
            }
            else
            {
                cout << num++;
            }
        }
        num--;

        for (int count = num; count >= 1;)
        {
            count--;

            if (count < 1)
            {
                cout << "*";
            }
            else
            {
                cout << count;
            }
        }
        cout << endl;
    }
    return 0;
}