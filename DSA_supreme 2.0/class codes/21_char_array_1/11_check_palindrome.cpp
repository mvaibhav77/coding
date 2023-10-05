#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(char ch[], int len)
{
    int start = 0;
    int end = len - 1;
    while (start <= end)
    {
        if (ch[start] == ch[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    // all good return true
    return true;
}
int main()
{
    char ch[50];
    cout << "enter character : " << endl;
    cin.getline(ch, 50);

    int len = strlen(ch);

    bool isPlaindrome = checkPalindrome(ch, len);

    if (isPlaindrome)
    {
        cout << "Valid !! ";
    }
    else
    {
        cout << "Not Valid !!";
    }
    return 0;
}