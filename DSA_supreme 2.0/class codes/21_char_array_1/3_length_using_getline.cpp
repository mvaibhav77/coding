#include <bits/stdc++.h>
using namespace std;

// function to fing the length of a string
int length(char ch[], int size)
{
    int length = 0;

    // using while loop
    //  while (ch[length] != '\0')
    //  {
    //      length++;
    //  }

    // using for loop
    for (int i = 0; i < size; i++)
    {
        if (ch[i] == '\0')
        {
            break;
        }
        else
        {
            length++;
        }
    }
    // return anwer
    return length;
}
int main()
{
    char ch[50];
    cout << "enter the character array : " << endl;

    // using .getline means that yahan pe length of sstring mei spaces bhi count honge
    cin.getline(ch, 50); // INPUT : my_name

    int len = length(ch, 50);
    cout << "length of string is : " << endl
         << len << endl; // 7 including space

    cout << "length using strlen() : " << endl
         << strlen(ch) << endl; // 7 including space
    return 0;
}