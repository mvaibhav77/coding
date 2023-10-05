#include <bits/stdc++.h>
using namespace std;
void reverse(char ch[], int length)
{
    int i = 0;
    int j = length - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}
int main()
{
    char ch[50];
    cout << "enter the string : " << endl;

    //.getlin() will cout pcaes if there in length
    cin.getline(ch, 50);
    cout << " before : " << ch << endl;

    // length of string
    int len = strlen(ch);

    // to reverse we need to pass the length of the string and not the size of the character array
    reverse(ch, len);
    cout << " after : " << ch << endl;
    return 0;
}