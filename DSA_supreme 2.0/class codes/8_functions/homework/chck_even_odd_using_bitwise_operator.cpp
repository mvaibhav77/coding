#include <bits/stdc++.h>
using namespace std;
int bitwise(int num)
{
    // the last bit of all even numbers iss 0 in binary and last bit of all odd numbers is 1 in binary

    // if we using Bitwise AND with 1 :  Then and of 0 (even) and 1 will give Zero

    // & of odd number and 1 will give 1 as output
    
    if (num & 1 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num;
    cout << "enter the number ";
    cin >> num;
    if (bitwise(num))
    {
        cout << "Even Number !!" << endl;
    }
    else
    {
        cout << "Odd Number !!" << endl;
    }
    return 0;
}