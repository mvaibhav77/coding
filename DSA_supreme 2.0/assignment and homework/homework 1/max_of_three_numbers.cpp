#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1 , num2 , num3 ;

    cout<<"To Find The Max Number !!!"<<endl;
    cout<<"Enter First Number : "<<endl;
    cin>>num1;
    cout<<"Enter Second Number : "<<endl;
    cin>>num2;
    cout<<"Enter Third Number : "<<endl;
    cin>>num3;

    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<num1<<" Is The Largest Number !! "<<endl;
        }
        else if(num1<num3)
        {
            cout<<num3<<" Is The Largest Number !! "<<endl;
        }
    }
    else if (num1<num2)
    {
        if(num2>num3)
        {
            cout<<num2<<" Is The Largest Number !! "<<endl;
        }
        else if(num2<num3)
        {
            cout<<num3<<" Is The Largest Number !! "<<endl;
        }
    }
return 0;
}
