#include <bits/stdc++.h>
using namespace std;

vector<int> TwoPtr(vector<int> &arr, int k, int x)
{
    int low = 0;
    int high = arr.size() - 1;

    while ((high - low) >= k)
    {
        // is left side difference is higher then we need to reduce it by moving the lower pointer forward

        // as the array is sorted moving lower pointer forward means to increase the value and decrease the difference with the X element
        if (x - arr[low] > arr[high] - x)
        {
            low++;
        }
        else
        {
            // if the difference of the higher end is more than the lower pointer we move the higher pointer closer to the X value in order to get the closest values to X.
            high--;
        }
    }
    // storing the answer range values in a vector
    // this consumes O(K) space in order to save it 

    vector<int> ans;
    for (int i = low; i <= high; i++)
    {
        // inserting elements
        ans.push_back(arr[i]);
    }
    // returning a vector so return type of function will also be a vector
    return ans;

    // OR if we dont want the space to be used we can use the STL and do this : 

    // return vector<int>(arr.begin() + low, arr.begin() + high + 1);

    // this stores the answer form begin+low and begin + high the +1 wala address store nhi karta hai 
}

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    return TwoPtr(arr, k, x);
}

int main()
{
    vector<int> v = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};

    // closest elements will be 30 , 25 , 39 , 42

    // condition izz : 1. the lesser difference one must be selected

    // condiiton izz : 2. if the difference izz same then the lower value must be selected

    int element = 35;                // target element
    int numberOfClosestElements = 4; // number of closest elements

    vector<int> ans = findClosestElements(v, numberOfClosestElements, element);

    // printing
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}