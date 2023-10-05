#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int size, int NumberOfParathas, int mid)
{
    int CurrentParathas = 0;

    for (int i = 0; i < size; i++)
    {
        int Rank = arr[i];
        int j = 1;
        int TimeTaken = 0;
        while (true)
        {
            if (TimeTaken + j * Rank <= mid)
            {
                ++CurrentParathas;
                TimeTaken += j * Rank;
                j++;
            }
            else
            {
                break;
            }
        }
        if (CurrentParathas >= NumberOfParathas)
        {
            return true;
        }
    }
    return false;
}

int MinimumTimeToComplete(int arr[], int size, int NumberOfParathas, int NumberOfCooks)
{
    int start = 0;
    int MaxRankCook = *max_element(arr, arr + size);

    // cout << " max : " << max << endl;

    int end = ((MaxRankCook * ((NumberOfParathas) * (NumberOfParathas + 1)))) / 2;
    // 10*(n*(n+1))/2

    // cout << "end : " << end << endl;

    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, size, NumberOfParathas, mid))
        {
            ans = mid;
            end = mid - 1; // we need the least time possible
        }
        else
        {
            start = mid + 1l;
        }
    }
    return ans;
}
int main()
{
    int NumberOfTestCases;
    // cout << "enter number of test cases: " << endl;
    cin >> NumberOfTestCases;

    while (NumberOfTestCases--)
    {
        int NumberOfParathas;
        int NumberOfCooks;

        // cout << "Enter Number Of Parathas : " << endl;
        cin >> NumberOfParathas;

        // cout << endl;

        // cout << "enter number of cooks : " << endl;
        cin >> NumberOfCooks;

        // cout << endl;

        // cout << "Enter Ranks Of Cooks : " << endl;
        int *CooksRanks = new int[NumberOfCooks];

        int size = NumberOfCooks;
        for (int i = 0; i < size; i++)
        {
            cin >> CooksRanks[i];
        }

        // cout << "CooksRanks : " << endl;

        // for (int i = 0; i < size; i++)
        // {
        //     cout << CooksRanks[i] << " " << endl;
        // }

        cout << MinimumTimeToComplete(CooksRanks, size, NumberOfParathas, NumberOfCooks) << endl;
    }

    return 0;
}