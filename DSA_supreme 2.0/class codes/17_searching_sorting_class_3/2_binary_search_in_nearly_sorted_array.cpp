#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        // ass mid origionally jo hotaa tha voh ab i / i-1 / i+1 in teen mei sse kisi bhi index pe ho skta hai isiliyea teeno index prr chck krenge

        if (mid - 1 >= 0 && arr[mid] == target)
        // mid - 1 >= 0 to chck if the index goes out of bounds oth code phat jayega
        {
            return mid; // mid
        }
        else if (mid + 1 < size && arr[mid - 1] == target)
        // mid + 1 < size  to chck if the index goes out of bounds oth code phat jayega
        {
            return mid - 1; // mid - 1
        }
        else if (arr[mid + 1] == target)
        {
            return mid + 1; // mid + 1
        }

        // mid + 2 / mid - 2 becoz i-1 and i+1 index already chck krchuke hai ab mid+1 karenge ya mid-1 karenge toh ek element jo pehle chck krchuke wps chck hoga isiliyea +2 / -2 karte hai

        else if (arr[mid] < target)
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}
int main()
{
    // sorted array : [10,20,30,40,50,60,70]

    // nearly sorted : [20,10,40,30,50,70,60]

    // means that the element which should be at ith Index in 'sorted array' is at  ith / [i-1]th / [i+1]th index in 'nearly sorted array'

    int arr[] = {20, 10, 40, 30, 50, 70, 60};
    int size = 7;
    int target = 90;
    int ans = BinarySearch(arr, size, target);

    if (ans == -1)
    {
        cout << "element not found !!";
    }
    else
    {
        cout << "Element At "
             << "Index : " << ans;
    }

    return 0;
}