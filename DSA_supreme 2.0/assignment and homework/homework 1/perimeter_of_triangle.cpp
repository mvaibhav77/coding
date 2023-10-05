#include <bits/stdc++.h>
using namespace std;
int main()
{
    int side1,side2,side3;

    cout<<"enter the length of first side of traingle : "<<endl;
    cin>>side1;
    cout<<"enter the length of second side of traingle : "<<endl;
    cin>>side2;
    cout<<"enter the length of third side of traingle : "<<endl;
    cin>>side3;


int perimeter = side1+side2+side3;

cout<<"The perimeter of the triangle with sides :"<<side1<<" "<<side2<<" "<<side3<<" is = "<<perimeter<<endl;

return 0;
}