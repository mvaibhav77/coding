#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    while (1)
    {
        int data;
        cin >> data;
        v.push_back(data);

        cout << " capacity: " << v.capacity() << " size: " << v.size() << endl;
    }
    return 0;
}