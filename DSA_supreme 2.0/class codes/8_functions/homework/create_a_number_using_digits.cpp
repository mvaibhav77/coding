#include <bits/stdc++.h>
using namespace std;
int create(int num)
{
    int number = 0;

    for (int i = 0; i < num; i++)
    {
        cout << "enter the digit : "<<endl;
        int digit;
        cin >> digit;
        number = number * 10 + digit;
    }
    return number;
}
int main()
{
    int number;

    cout << "enter number of digits u want to enter : " << endl;

    cin >> number;

    int result = create(number);
    cout << result;

    return 0;
}