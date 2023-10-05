#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int decimal = 0;

    int i = 0;

    while (n > 0)
    {
        int bit = n & 1; // bitwise and
        
        cout<<bit<<endl;

        decimal = decimal + bit * round(pow(2,i)); // base 

        i++;

        n = n >> 1; // right shift
    }
    return decimal;
}
int main()
{
    int n;
    cout << "Enter The Number : " << endl;
    cin >> n;
    int result = binaryToDecimal(n);
    cout << result << endl;
    return 0;
}