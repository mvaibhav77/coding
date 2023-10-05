#include <bits/stdc++.h>
using namespace std;
int prime(int num)
{
    if (num == 0 || num == 1)
    {
        return false;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;

    cout << "enter the number : ";

    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (prime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}