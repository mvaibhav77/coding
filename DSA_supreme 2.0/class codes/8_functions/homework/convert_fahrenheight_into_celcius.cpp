#include <bits/stdc++.h>
using namespace std;
float convert(float fah)
{
    float cel = ((fah - 32) * 5) / 9;
    return cel;
}
int main()
{
    float fahrenheight;
    cout << "enter the temp in fahrenheight : ";
    cin >> fahrenheight;
    cout<<" converterd temp is : "<<convert(fahrenheight);
    return 0;
}