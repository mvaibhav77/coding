#include <bits/stdc++.h>
using namespace std;
int expand(string s, int start, int end)
{
  int count = 0;
  while (start >= 0 && end < s.length() && s[start] == s[end])
  {
    count++;
    start--;
    end++;
  }
  return count;
}

int countSubstrings(string s)
{

  int Totalcount = 0;

  for (int center = 0; center < s.length(); center++)
  {

    // EVEN
    int EvenKaCount = expand(s, center, center);

    // ODD
    int OddKaCount = expand(s, center, center + 1);

    Totalcount = Totalcount + OddKaCount + EvenKaCount;
  }
  return Totalcount;
}
int main()
{
  string s = "madam";
  int answer = countSubstrings(s);
  cout<<answer;
  return 0;
}