#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// comparator is always a boolean type function !

bool mycomp(vector<int> &a, vector<int> &b)
{

    return a[0] > b[0];
}
bool mycompp(vector<int> &a, vector<int> &b)
{

    return a[1] < b[1];
}
bool mycomppp(vector<int> &a, vector<int> &b)
{

    return a[1] > b[1];
}
int main()
{
    vector<vector<int>> v = {{1, 44}, {0, 55}, {0, 22}, {2, 33}};
    // sorts in increasing order of the first index that iz : 0 , 1 and 2 of the 2d vector elements
    cout << "current vector : " << endl;
    print(v);

    cout
        << "0th Index Order increasing : " << endl;
    sort(v.begin(), v.end());
    print(v);
    cout
        << "0th Index Order decreasing : " << endl;
    sort(v.begin(), v.end(), mycomp);
    print(v);

    cout << "1st Index Order increasing : " << endl;
    sort(v.begin(), v.end(), mycompp);
    print(v);

    cout << "1st Index Order decreasing : " << endl;
    sort(v.begin(), v.end(), mycomppp);
    print(v);

    return 0;
}