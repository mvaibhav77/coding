#include <bits/stdc++.h>
using namespace std;
int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return (num * fact(num - 1));
    }
}
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << "factorial of " << num << " is : " << fact(num) << endl;
    return 0;
}