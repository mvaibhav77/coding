#include <bits/stdc++.h>
using namespace std;
void passByValue(int num)// pass by value
{
    num -= 5;
    cout << "passByValue num: " << num << endl;
    cout << endl;
}
int main()
{
    int num = 10;
    num--;
    num *= 10;

    passByValue(num);

    cout << "num inside main : " << num << endl;

    return 0;
}