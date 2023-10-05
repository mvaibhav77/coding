#include <bits/stdc++.h>
using namespace std;
void uppercase(char ch[])
{
    // conversion idea
    // lowercase - 'a' + 'A' converts lower to upper case

    int index = 0;

    while (ch[index] != '\0')
    {
        // current character
        int currentCharacter = ch[index];

        // if between a and z
        if (currentCharacter >= 'a' && currentCharacter <= 'z')
        {
            // change the caracter in the array to upper case
            ch[index] = currentCharacter - 'a' + 'A';
        }
        index++;
    }
}
int main()
{
    char ch[50];

    cout << "enter the string " << endl;
    cin.getline(ch, 50);

    cout << "before : " << ch << endl;

    int len = strlen(ch);

    uppercase(ch);

    cout << "after : " << ch << endl;

    return 0;
}