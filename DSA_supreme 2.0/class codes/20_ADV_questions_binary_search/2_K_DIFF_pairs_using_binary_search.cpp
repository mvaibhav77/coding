#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> &nums, int start, int k)
{
    int end = nums.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == k)
        {
            // returning any integer other than -1 will result in true cindition in the if  statement in the findpair function asn the if block will get executed
            return mid;
        }
        else if (k > nums[start] + k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // if no such pairs then return -1
    return -1;
}
int findPairs(vector<int> &nums, int k)
{
    // first we sort the array ..... WHY?

    // now as the array is sorted we cna apply binary search too

    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        // if there is an index for nums[i]+k then the if block will get executed

        if (bs(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }
    
    return ans.size();
}
int main()
{
    vector<int> nums = {3, 1, 4, 2, 5};
    int k = 2;
    int answer = findPairs(nums, k);
    cout << "pairs with Diff " << k << " :" << endl
         << answer;
    return 0;
}