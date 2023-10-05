#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &v, int size)
{

    for (int i = 0; i < size; i++) // looping to print vector
    {
        int data;
        cout << "enter  data : " << i + 1 << " : ";
        cin >> data;
        v.push_back(data);
    }
}

void input2(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        v.push_back(6);
    }
}

void print(vector<int> v)
{
    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "enter size : ";
    cin >> size;
    vector<int> v;

    input(v, size); // pass by reference in-order to change the origional vector only

    // OR use it here only 

    // for (int i = 0; i < size; i++)
    // {
    //     int data;
    //     cout << "enter  data : " << i + 1 << " : ";
    //     cin >> data;
    //     v.push_back(data);
    // }

    print(v);

    input2(v, 6);

    for (int i = 0; i < 4; i++)
    {
        v.push_back(6);
    }

    print(v);

    return 0;
}