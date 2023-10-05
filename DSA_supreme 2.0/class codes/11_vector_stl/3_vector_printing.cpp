#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    int size = v.size(); // to get size of vector 

    for (int i = 0; i < size; i++) // looping to print vector 
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    print(v); // pr inting vectors

    return 0;
}