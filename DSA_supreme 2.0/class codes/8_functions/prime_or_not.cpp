#include <bits/stdc++.h>
using namespace std;
int prime(int a)
{
    if (a == 0 || a == 1)
    {
        return false;
    }

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
            ;
        }
    }
    return true;
}
int main()
{
    int num;

    cout << "enter the number : ";

    cin >> num;

    if (prime(num))
    {
        cout << "prime number!! "<< endl;
    }
    else
    {
        cout << "not a prime number !!";
    }

    return 0;
}