#include <bits/stdc++.h>
using namespace std;
int decimalToBinary(int n)
{
    int binary = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2; // binary mei karre toh 2 se operate karenge

        binary = binary + bit * pow(10, i++);

        n /= 2; // binary mei karre toh 2 se operate karenge
    }
    return binary;
}
int main()
{
    int n;
    cout << "Enter The Number : " << endl;
    cin >> n;
    int result = decimalToBinary(n);
    cout << result << endl;
    return 0;
}