#include <bits/stdc++.h>
using namespace std;
void passByValue(int marks)// pass by value
{
    marks--;
    marks *= 10;
    cout << "inside passBy Value :" << marks;
    cout << endl;
}
int main()
{
    int marks = 90;
    marks++;

    passByValue(marks);

    cout << "num inside main : " << marks << endl;

    return 0;
}