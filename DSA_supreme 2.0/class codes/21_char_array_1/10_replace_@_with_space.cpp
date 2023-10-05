#include <bits/stdc++.h>
using namespace std;
void Replace(char ch[])
{
    // repalce @ with space

    int index = 0;

    while (ch[index] != '\0')
    {
        if (ch[index] == '@') // use single inverted for special characters
        {
            ch[index] = ' '; // use single inverted when assigning a space to a character index 
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

    Replace(ch);

    cout << "after : " << ch << endl;

    return 0;
}