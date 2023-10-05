#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
    int size = v.size();
    cout << "elements of vector : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
}
void printFront(vector<int> &v)
{

    cout << "front element : " << v.front() << endl;
}

void printBack(vector<int> &v)
{
    cout << "back element : " << v.back() << endl;
}
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    print(v);

    printFront(v);

    printBack(v);

    return 0;
}