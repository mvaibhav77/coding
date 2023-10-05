#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        int num = 1; // 1

        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        num--;

        for (int a = num; a > 1;)
        {
            a--;
            cout << a << " ";
        }
        cout << endl;

        // cout << "character is : " << ch << endl;
    }
    return 0;
}