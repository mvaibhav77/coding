#include <bits/stdc++.h>
using namespace std;
int decimalToBinary(int n)
{
    int binary = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1; // first bit using the bitwise and

        binary = binary + bit * round(pow(10, i++));

        n = n >> 1; // right shift
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