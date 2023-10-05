#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout << "Enter the Number : " << endl;
    cin >> number;

    if (number > 1)
    {
        if (number % 1 == 0 && number % number == 0)
        {
            cout << "Number Is Prime !! " << endl;
        }
        else
        {
            cout << "Number Is Not Prime !! " << endl;
        }
    }

    else{
        cout << "Number Is Negetive !! " << endl;
    }
    return 0;
}