#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[50];
    cout << "enter the character array : " << endl;
    
    cin.getline(ch, 50);

    cout << "length using strlen() : " << endl
         << strlen(ch) << endl;
    return 0;
}