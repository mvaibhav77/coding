#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;

    // cout<<"enter size : ";
    // cin>>size;

    for (int i = 0; i < size; i++)
    {
        // ascii code for A : 65

        char ch = char(65); // A

        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        ch--;

        for (char alpha = ch; alpha > 'A';)
        {
            alpha--;
            cout << alpha << " ";
        }
        cout << endl;

        // cout << "character is : " << ch << endl;
    }
    return 0;
}