#include <bits/stdc++.h>
using namespace std;
int count(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // single element case
        if (start == end)
        {
            return start;
        }

        // odd mid

        if (mid & 1)

        
        //  means odd number OR ( mid % 2 != 0 )
        {
            if (arr[mid] == arr[mid - 1])
            {
                //left side of answer

                //right jana hai
                start = mid + 1;
            }
            else // right side pe hai 
            {
                //left jana hai
                end = mid - 1;
            }
        }

        // even mid
        else
        //(mid % 2 == 0)
        {
            // left side of answer

            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
                // as mid+1 already compared and matches the mid element
            }

            // either standing on ans or at the right part of the answer

            else
            {
                // mid-1 karenge toh ans miss hojayega as same as that of poeek in mountain array
                end = mid;
            }
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    // the elements occur even number of times except one which is odd number of times

    // repeating numbers repeat in pairs and no pair is adjacent

    // numbers dont repeat more than twice ek sath

    int arr[] = {1, 1, 5, 5, 2, 2, 4, 4, 6, 6, 2, 3, 3};
    // 2 is 3 times rest all are 2 times
    int size = 13;

    int ans = count(arr, size);
    cout << "Element Index : " << ans;

    return 0;
}