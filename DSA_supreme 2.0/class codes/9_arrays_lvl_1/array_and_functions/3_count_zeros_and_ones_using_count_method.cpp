#include <bits/stdc++.h>
using namespace std;
void count(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    cout << "number of zeros : " << zeroCount << endl;
    cout << "number of ones : " << oneCount << endl;
}
int main()
{
    int arr[7] = {0, 0, 0, 1, 1, 1, 1};
    int size = 7;
    count(arr, size);
    return 0;
}