#include <bits/stdc++.h>
using namespace std;
int main()
{
    float principle, rate;
    int time;
    int number;

    cout << "enter the principle amount : " << endl;
    cin >> principle;
    cout << "enter the rate of interest : " << endl;
    cin >> rate;
    cout << "enter the compounding period : " << endl;
    cin >> number;
    cout << "enter the time : " << endl;
    cin >> time;

    float CI = principle * pow((1 + rate / number), number * time);
    ;

    cout << " The Compound Interest For principle : " << principle << " rate : "
         << " Time : "
         << "coumpounding period : "
         << " is = " << CI << endl;

    return 0;
}