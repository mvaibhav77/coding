#include <bits/stdc++.h>
using namespace std;

// void max(int num1, int num2, int num3) // definiton
// {

//     if (num1 >= num2 && num1 >= num3)
//     {
//         cout << "Max is : " << num1;
//     }
//     else if (num2 >= num3 && num2 >= num1)
//     {
//         cout << "Max is : " << num2;
//     }
//     else
//     {
//         cout << "Max is : " << num3;
//     }
// }

// OR 

// Using the Inbuilt Max Function : 

// works for only two numbers at once!!

void max(int num1, int num2, int num3)
{
    int ans = max(num1, num2);

    ans = max(ans, num3);

    cout << ans << endl;
}

int main()
{
    int num1, num2, num3;

    cout << "enter first number : " << endl;
    cin >> num1;

    cout << "enter second number : " << endl;
    cin >> num2;

    cout << "enter third number : " << endl;

    cin >> num3;

    max(num1, num2, num3); // calling

    return 0;
}