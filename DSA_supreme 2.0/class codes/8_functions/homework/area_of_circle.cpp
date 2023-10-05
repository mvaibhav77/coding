#include <bits/stdc++.h>
using namespace std;
float area(int r)
{
    float area = 0;
    area = 3.14 * (r * r);
    return area;
}
int main()
{
    float radius;
    cout << " enter radius  : ";
    cin >> radius;
    cout << "the area of circle with radius " << radius << " is : " << area(radius);
    return 0;
}