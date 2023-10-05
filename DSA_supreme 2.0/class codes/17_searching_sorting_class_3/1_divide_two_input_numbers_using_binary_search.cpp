#include <bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor)
{
    int start = 0;
    int end = dividend;
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (divisor * mid == dividend)
        {
            return mid;
        }

        if (divisor * mid < dividend)
        {
            // store ans
            ans = mid;
            // go to right
            start = mid + 1;
        }
        else //(divisor * mid > dividend)
        {
            // go to left
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
double precision(int dividend, int divisor, int places, int temp)
{
    double ans = temp;
    double factor = 1;
    for (int i = 0; i < places; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * divisor < dividend; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    // quotient * divisor + remainder = dividend;
    // quotient * divisor <= dividend

    int dividend = 29;
    int divisor = -7;
    int tempSol = divide(abs(dividend), abs(divisor));

    // decimal places ....
    int decimal = 3;

    // cout << "enter the number of decimal places : " << endl;
    // cin >> decimal;

    // sending positive tempSol som as to ssolve using positive only and then check later on about negetive/positive

    double finalAnswer = precision(abs(dividend), abs(divisor), decimal, tempSol);

    if ((dividend < 0) || (divisor < 0))
    {
        finalAnswer = 0 - finalAnswer;
        cout << finalAnswer << endl;
    }
    else
    {
        cout << finalAnswer << endl;
    }
    return 0;
}