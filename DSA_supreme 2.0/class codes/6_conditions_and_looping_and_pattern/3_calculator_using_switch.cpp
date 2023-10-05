#include <bits/stdc++.h>
using namespace std;
int main()
{
    char op;
    int ans = 0;
    int num1, num2;

    cout << "enter the first number :  " << endl;
    cin >> num1;

    cout << "enter the second number :  " << endl;
    cin >> num2;

    cout << "enter the operator + - * / % : " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Addition Operation" << endl;
        ans = num1 + num2;
        break;
    case '-':
        cout << "Subtraction Operation" << endl;
        ans = num1 - num2;
        break;
    case '*':
        cout << "Multiplication Operation" << endl;
        ans = num1 * num2;
        break;
    case '/':
        cout << "Divison Operation" << endl;
        ans = num1 / num2;
        break;
    case '%':
        cout << "Modulus Operation" << endl;
        ans = num1 % num2;
        break;
    default:
        cout << "Invalid operator" << endl;
    }

    cout << "answer of num 1 " << op << " num2 is : " << ans << endl;
    return 0;
}