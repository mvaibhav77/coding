#include <bits/stdc++.h>
using namespace std;

// using the two pointer approach

int findPairs(vector<int> &nums, int k)
{
    // first we sort the array ..... WHY?

    // this solves the issue of neegtive difference as now the array is sorted so differnece of larger - smaller will laways be +ve Only !!

    // absloute use krne ki koi zarurat nhi ab
    sort(nums.begin(), nums.end());

    // 1 2 3 4 5
    // i j       " At the start the positions of i and j "

    // using set to contain only unique pairs as if the elements repeat the elements are not included in the set  ...
    set<pair<int, int>> ans;

    int i = 0;
    int j = 1;

    while (j < nums.size())
    {
        // difference nikale
        int diff = nums[j] - nums[i];

        if (diff == k)
        {
            // inserting the pair in the set
            ans.insert({nums[i], nums[j]});

            // incrementing i and j
            i++;
            j++;
        }
        else if (diff > k)
        {
            // 1 2 3 4 5
            // i     j

            // agar differnece bada hai and humein use upto k lana hai toh dono pointer mei se i ko increment krna hoga to close in the gap :

            // 1 2 3 4 5
            //   i   j

            i++;
        }
        else
        {
            // if differnece is smaller then we need to increase the value of diff to bring it upto k so we increase the index j is pointing at

            // 1 2 3 4 5
            // i j

            // we need to increase the j index in order to bring the value upto 2 :

            // 1 2 3 4 5
            // i   j

            j++;
        }

        // we dont want the pairs where i and j point to the same element

        if (i == j)
        {
            // increment the succeding one to skip this element
            j++;
        }
    }

    // returning the number of set in order to get the different number of pairs
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