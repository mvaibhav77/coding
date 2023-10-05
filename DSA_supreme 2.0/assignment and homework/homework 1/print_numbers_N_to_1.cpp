#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout << "Enter the Number : " << endl;
    cin >> number;

    cout << "Output : " << endl;
    for (int i = number; i >= 1; i--)
    {
        cout << number << endl;
        number--;
    }
    return 0;
}