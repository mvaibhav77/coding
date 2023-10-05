#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int size, int NumberOfStudents, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < size; i++)
    {
        // if the pagenumbers are grater tahn the mid then to voh allocate ho hee nahi skta na !!
        if (arr[i] > mid)
        {
            return false;
        }

        // if page sum + arr[i] is greater than mid mtlb now jitta 1st student ko allocate kr skte thee hogaya .. move to next student by studentCount++

        if (pageSum + arr[i] > mid)
        {
            studentCount++;

            // and initialise the page sum with the current arr[i] to carry out the calculation of page sum freshly !!
            pageSum = arr[i];

            // as we increased the student count we need to check ki kahi student number given se zadaya toh nhi agar hai toh false !!
            if (studentCount > NumberOfStudents)
            {
                return false;
            }
        }
        else
        {
            // if none of the above cases occur mtlb bss add krte jao pagesum ko !!
            pageSum += arr[i];
        }
    }

    // if no false encountered mtlb true return kr skte
    return true;
}
int allocation(int arr[], int size, int NumberOfStudents)
{
    // agar number of students hee zadaya hai books se toh sbko ek nahi milskta question condition wont be followed mtlb not possible
    if (NumberOfStudents > size)
    {
        return -1;
    }

    // start from 0 till the maximum search space that is the total sum of pages
    int start = 0;

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
    int end = accumulate(arr, arr + size, 0);

    // ans to store any possible solution
    int ans = -1;

    while (start <= end)
    {
        // calculate mid
        int mid = start + (end - start) / 2;

        // fin if the mid can give possible allocation to the given number of students
        if (isPossible(arr, size, NumberOfStudents, mid))
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

    // 1. we have a asorted array and usmei kuch operate krna hai

    // 2. we have a sorted search space and usmei humein kuch krna hai -> mid nikalna hai ya koi element ya sqrrt etc...

    // 3. Also used when we want to maximise or minimize anything
    // This application we will se in this question

    int arr[] = {10, 20, 30, 40};
    int NumberOfStudents = 2;
    int size = 4;
    int ans = allocation(arr, size, NumberOfStudents);
    if (ans != -1)
    {
        cout << "maximum number of minimum pages allocated are : " << ans;
    }
    else
    {
        cout << " not possible !! ";
    }

    return 0;
}