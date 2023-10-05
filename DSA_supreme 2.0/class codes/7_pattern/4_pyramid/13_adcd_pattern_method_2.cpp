#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;

    for (int row = 0; row < size; row++)
    {
        char ch;

        // ascii code for A : 65

        for (int col = 0; col < row + 1; col++)
        {
            int number = col + 1;
            ch = number + 'A' - 1; // gives a numeric value 65 whose char covnverson is A
            cout << ch<<' ';
        }

        // JAB TAK A TK NAHI PAHUCH AJATA TB TK CAHLANA HAI

        for (char alpha = ch; alpha > 'A';)
        {
            alpha--;
            cout << alpha<<' ';
        }
        
        cout << endl;
    }
    return 0;
}