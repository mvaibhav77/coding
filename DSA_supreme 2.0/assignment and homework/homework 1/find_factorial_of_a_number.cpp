#include <bits/stdc++.h>
using namespace std;
int fact(int num); // decleration
int main()
{
    int number;
    cout << "Enter the Number to find Fatorial : " << endl;
    cin >> number;

    cout << "Output : " << fact(number) << endl; // calling

    return 0;
}

int fact(int num) // definition
{

    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
        {
            return (num * fact(num - 1));
        }
}