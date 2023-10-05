#include <bits/stdc++.h>
using namespace std;
void chck(int n)
{
    if (n % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}
int main()
{
    int n;
    cin>>n;
    chck(n);
    return 0;
}