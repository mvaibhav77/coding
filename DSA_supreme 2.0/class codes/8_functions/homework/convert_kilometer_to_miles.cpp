#include <bits/stdc++.h>
using namespace std;
float convert(float km)
{
    float miles = km * 0.6214;
    return miles;
}
int main()
{
    float kilometer;
    cout << "enter kilometers  : ";
    cin >> kilometer;
    cout << " converterd kilometer -> miles is : " << convert(kilometer) << " miles";
    return 0;
}