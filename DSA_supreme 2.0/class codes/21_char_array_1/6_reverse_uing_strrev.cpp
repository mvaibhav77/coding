#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[50];
    cout << "enter the string : " << endl;

    //.getlin() will cout spaces if there in length
    cin.getline(ch, 50);

    cout << " before : " << ch << endl;

    // uing the inbuilt reverse function strrev()
    strrev(ch);

    cout << " after : " << ch << endl;
    return 0;
}