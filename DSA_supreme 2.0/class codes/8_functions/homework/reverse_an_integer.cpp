#include <bits/stdc++.h>
using namespace std;
int reverse(int num)
{
    int ans = 0;
    int rem = 0;
    bool isNeg = false;

    if (num <= INT_MIN)
    {
        return 0;
    }
    if (num < 0)
    {
        isNeg = true;
        // converted to positive
        num = -num;
    }

    while (num > 0)
    {
        if (ans > INT_MAX)
        {
            return 0;
        }
        rem = num % 10;
        ans = ans * 10 + rem;
        num = num / 10;
    }

    return isNeg ? -ans : ans;
}
int main()
{
    int num;
    cout << "Enter The Number : ";
    cin >> num;
    int result = reverse(num);
    cout << result << endl;
    return 0;
}