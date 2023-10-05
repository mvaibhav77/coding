#include <bits/stdc++.h>
using namespace std;
void missing(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    // n is size here
    int actualSum = (size * (size + 2)) / 2;
    int missing = (actualSum - sum);

    cout << "missing number is : " << missing << endl;
}
int main()
{
    int arr[] = {0, 2, 5, 4, 1};

    // always contains 0 as it does not distort the sum plus adds up to the total number of elements in the array

    int size = 5; // size of number of elements in array
    missing(arr, size);
    return 0;
}