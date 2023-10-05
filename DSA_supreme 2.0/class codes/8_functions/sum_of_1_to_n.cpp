#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int num;

    cout << "enter the number : ";

    cin >> num;

    int result = sum(num);
    cout << "the sum of 1 -> " << num << " is : " << result << endl;
    return 0;
}