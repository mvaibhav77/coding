#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10];
    cout << "enter the character array : " << endl;
    cin >> ch;
    cout << "Output : " << ch << endl;
    cout << "ascii values of '/0 ' : " << int(ch[5]) << endl;

    //used to clear the buffer / delimitters 
    cin.ignore();

    // input with spaces and tabs
    char name[100];
    cout << "enter the character array : " << endl;
    cin.getline(name, 100);
    cout << "getline output : " << endl
         << name;
    return 0;
}