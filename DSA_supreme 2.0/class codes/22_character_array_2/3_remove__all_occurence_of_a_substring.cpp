#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part)
{

    while (s.find(part) != string::npos)
    {
        // if inside here means that the part exists
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    string answer = removeOccurrences(s, part);
    cout << answer;
     return 0;
}