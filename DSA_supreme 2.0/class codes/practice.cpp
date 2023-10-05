#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<float> v = {1.5, 2.3, 6.5};
    cout << accumulate(v.begin(), v.end(), 0);
    return 0;
}
