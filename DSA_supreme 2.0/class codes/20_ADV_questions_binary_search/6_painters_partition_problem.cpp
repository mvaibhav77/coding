#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], long long size, int NumberOfPainters, long long mid)
{
    int PainterCount = 1;
    long long timeSum = 0;

    for (int i = 0; i < size; i++)
    {
        // if the timeSum are grater tahn the mid then to voh allocate ho hee nahi skta na !!
        if (arr[i] > mid)
        {
            return false;
        }

        // if page sum + arr[i] is greater than mid mtlb now jitta 1st painter ko allocate kr skte thee hogaya .. move to next painter by PainterCount++

        if (timeSum + arr[i] > mid)
        {
            PainterCount++;

            // and initialise the timeSum with the current arr[i] to carry out the calculation of page sum freshly !!
            timeSum = arr[i];

            // as we increased the painter count we need to check ki kahi painter number given se zadaya toh nhi agar hai toh false !!
            if (PainterCount > NumberOfPainters)
            {
                return false;
            }
        }
        else
        {
            // if none of the above cases occur mtlb bss add krte jao timeSum ko !!
            timeSum += arr[i];
        }
    }

    // if no false encountered mtlb true return kr skte
    return true;
}

long long minTime(int arr[], int size, int NumberOfPainters)
{
    // agar number of painters hee zadaya hai books se toh sbko ek nahi milskta question condition wont be followed mtlb not possible
    // if (NumberOfPainters > size)
    // {
    //     return -1;
    // }

    // start from 0 till the maximum search space that is the total sum of pages
    long long start = 0;

    // abhi max pages nikal na hoga to initialize the end
    // int maxPages = 0;

    // calculating max pages
    // for (int i = 0; i < size; i++)
    // {
    //     maxPages += arr[i];
    // }

    // initialising end witht the maximum number of pages
    // int end = maxPages;

    // using accumulate STL of C++ instead of all this maxPages calculation

    // accumulate (start,end,currentSum)

    // long long end = (long long)accumulate(arr, arr + size, 0);
    
    long long int end;
    for (int i = 0; i < size; i++)
    {
        end += arr[i];
    }

    // ans to store any possible solution
    long long ans = -1;

    while (start <= end)
    {
        // calculate mid
        long long mid = start + (end - start) / 2;

        // fin if the mid can give possible allocation to the given number of painters
        if (isPossible(arr, size, NumberOfPainters, mid))
        {
            // if solution is possible we store it in ans and then look for possible answers lesser than the current answer
            ans = mid;
            end = mid - 1;
        }
        else
        {
            // if solution not possible for the current mid then we update start to mid+1  to find possible solution on the right side of mid
            start = mid + 1;
        }
    }

    // return the solution obtained
    return ans;
}
int main()
{
    // binary search applied when :

    // 1. we have a sorted array and usmei kuch operate krna hai

    // 2. we have a sorted search space and usmei humein kuch krna hai -> mid nikalna hai ya koi element ya sqrrt etc...

    // 3. Also used when we want to maximise or minimize anything
    // This application we will se in this question

    int arr[] = {10, 20, 30, 40};
    int NumberOfPainters = 2;
    int size = 4;
    int ans = minTime(arr, size, NumberOfPainters);
    if (ans != -1)
    {
        cout << "maximum of minimum time required to paint iz : " << ans;
    }
    else
    {
        cout << " not possible !! ";
    }

    return 0;
}