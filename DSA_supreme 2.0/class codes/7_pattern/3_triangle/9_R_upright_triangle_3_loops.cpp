#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size=5; 

    //using three loops one for row one for spaces and last one for * in columns

    // using basic increasing and decreasing triangles of L

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size-1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}