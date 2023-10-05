#include <bits/stdc++.h>
using namespace std;
int setBits(int num)
{
    // set bits means how many of the digits are 1 in it
    int count = 0;
    while (num > 0)
    {
        // dividing by 2 gives us the first / LSB of the number .

        int bit = num & 1;
        if (bit == 1)
            count++;
        num = num >> 1;
    }
    return count;
}
int main()
{
    int num;
    cin >> num;
    int result = setBits(num);
    cout << result;
    return 0;
}