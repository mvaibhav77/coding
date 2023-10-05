#include <bits/stdc++.h>
using namespace std;
int main()
{
    float principle;
    int rate;
    int time;

    cout << "enter the principle amount : " << endl;
    cin >> principle;
    cout << "enter the rate of interest : " << endl;
    cin >> rate;
    cout << "enter the time : " << endl;
    cin >> time;

    int SI = (principle * rate * time) / 100;

    cout << "the Simple Interest for principle : " << principle << " , rate : " << rate << " , time : " << time << " is = " << SI << endl;
    return 0;
}