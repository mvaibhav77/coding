#include <bits/stdc++.h>
using namespace std;
void print(int num)
{
    int rev = 0;
    int i = 1;
    while (num > 0)
    {
        int r = num % 10;
        num = num / 10;
        cout << "Digit " << i++ << " is : " << r << endl;
    }
}
int main()
{
    int num;
    cout << "enter the number : ";
    cin >> num;
    print(num);
    return 0;
}