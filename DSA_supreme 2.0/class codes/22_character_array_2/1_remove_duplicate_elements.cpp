#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    string ans = "";
    int index = 0;

    while (index < s.length())
    {
        // rightmost character of ans string se comparison karenge
        if (ans.length() > 0 && ans[ans.length() - 1] == s[index])
        {
            // pop the element form the anwer string
            ans.pop_back();
        }
        else
        {
            // push into the answer string
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}
int main()
{
    string s = "azxxzy"; // given string
    // cin >> s;
    string answer = removeDuplicates(s);
    cout << "answer : " << answer << endl;
    return 0;
}