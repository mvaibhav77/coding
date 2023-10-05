#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
    int size = v.size();
    if (size != 0)
    {
        cout << "elements of vector are : " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "empty vector !!";
    }
}
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    print(v);

    v.clear();
    cout << "vector cleared !! " << endl;
    print(v);

    return 0;
}