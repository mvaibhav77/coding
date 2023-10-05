#include <bits/stdc++.h>
using namespace std;
void passByReference(int &num)// pass by reference
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

    passByReference(num);

    cout << "num inside main : " << num << endl;

    return 0;
}