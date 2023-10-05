#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
    int size = v.size();
    cout << "elements of v2 vector : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5};

    vector<int> v2(v);

    print(v);
    return 0;
}