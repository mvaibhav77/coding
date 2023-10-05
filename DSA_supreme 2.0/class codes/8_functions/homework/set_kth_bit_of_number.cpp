#include <bits/stdc++.h>
using namespace std;
int setKthBit(int N, int K)
{
    // set k-th bit means uss bit ko 1 karna hai 0 -> 1 / 1 -> 1 kuch bhi ho !!
    int value = 1 << K;
    int ans = N | value;
    return ans;
}
int main()
{
    int num;
    cout << "Enter The Number : ";
    cin >> num;
    int shift;
    cout << "Enter The K-th Bit : ";
    cin >> shift;
    int result = setKthBit(num, shift);
    cout << result;
    return 0;
}