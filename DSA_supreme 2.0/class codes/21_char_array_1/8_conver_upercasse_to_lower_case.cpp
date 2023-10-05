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

        // if between A and Z
        if (currentCharacter >= 'A' && currentCharacter <= 'Z')
        {
            // change the character in the array to Lowercase
            ch[index] = currentCharacter - 'A' + 'a';
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