#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b, int c)
{
    return (a + b + c);
}
int main()
{
    int num1, num2, num3;
    cout << "enter first number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
    cout << "enter third number" << endl;
    cin >> num3;

    cout << "the sum of -> " << num1 << " + " << num2 << " + " << num3 << " is : " << sum(num1, num2, num3) << endl;
    return 0;
}