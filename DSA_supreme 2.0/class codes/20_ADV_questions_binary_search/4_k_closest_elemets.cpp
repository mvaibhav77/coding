#include <bits/stdc++.h>
using namespace std;

int LowerBound(vector<int> &arr, int x)
{

    int s = 0;
    int e = arr.size() - 1;
    int ans = e;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (x > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

vector<int> bs(vector<int> &arr, int k, int x)
{
    // lower bound
    int h = LowerBound(arr, x);
    // cout << h << endl;
    int l = h - 1;

    while (k--)
    {
        if (l < 0)
        {
            h++;
        }
        else if (h >= arr.size())
        {
            l--;
        }
        else if (x - arr[l] > arr[h] - x)
        {
            h++;
        }
        else
        {
            l--;
        }
    }

    // vector<int> ans;

    // for (int i = l + 1; i < h; i++)
    // {
    //     ans.push_back(arr[i]);
    // }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << endl;
    // return ans;

    return vector<int>(arr.begin() + l + 1, arr.begin() + h);
}

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    return bs(arr, k, x);
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // closest elements will be 30 , 25 , 39 , 42

    // condition izz : 1. the lesser difference one must be selected

    // condiiton izz : 2. if the difference izz same then the lower value must be selected

    int element = -1;                // target element
    int numberOfClosestElements = 4; // number of closest elements

    vector<int> ans = findClosestElements(v, numberOfClosestElements, element);

    // printing
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}