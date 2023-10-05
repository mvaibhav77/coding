#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int numberOfCows, int mid)
{

    int cowCount = 1;
    int FirstCowPosition = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - FirstCowPosition >= mid)
        {
            cowCount++;
            FirstCowPosition = stalls[i];
        }
        if (cowCount == numberOfCows)
        {
            return true;
        }
    }
    return false;
}
int solve(int n, int NumberOfCows, vector<int> &stalls)
{

    /// sort first in order to place the stalls in increasing order
    sort(stalls.begin(), stalls.end());

    int start = 0;                                   // minimum
    int end = stalls[stalls.size() - 1] - stalls[0]; // maximum
    int ans = -1;                                    // default answer

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(stalls, NumberOfCows, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 4, 8, 9};
    int NumberOfStalls = 5;
    int cows = 3;
    int ans = solve(NumberOfStalls, cows, arr);
    cout << ans;
    return 0;
}