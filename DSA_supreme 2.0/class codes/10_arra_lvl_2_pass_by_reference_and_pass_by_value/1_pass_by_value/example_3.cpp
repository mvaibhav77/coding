#include <bits/stdc++.h>
using namespace std;
void passByValue(int jaadu) // pass by value
{
    jaadu--;
    ;
    cout << "passByValue num: " << jaadu << endl;
    cout << endl;
}
int main()
{
    int a = 100;
    a -= 6;

    passByValue(a);

    cout << "num inside main : " << a << endl;

    return 0;
}