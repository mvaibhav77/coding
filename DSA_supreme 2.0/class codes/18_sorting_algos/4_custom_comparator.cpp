#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// comparator is always a boolean type function !

bool mycomp(int &a, int &b)
{
    // 1.  this sorts the values in increasing order

    // return a < b;

    // 2.  this will now sort the valeus in decreasing order

    return a > b;
}
int main()
{
    vector<int> v{44, 55, 22, 11, 33};
    // sorting using the STL Sorting Function:
    sort(v.begin(), v.end());
    cout << "Sorted in increasing order : " << endl;
    print(v);

    // what if we want to sort in the decreasing order ? here comes the role of custom comparator
    
    cout << "Sorted in decreasing order : " << endl;
    // using comparator to sort in decreasing order 
    sort(v.begin(), v.end(), mycomp);
    print(v);

    return 0;
}