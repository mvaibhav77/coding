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

    if((side1+side2)>side3 && (side1+side3)>side2 && (side2+side3)>side1)
    {
        cout<<"Valid Triangle ! "<<endl;
    }

    else{
        cout<<"Invalid Triangle ! "<<endl;
    }
return 0;
}