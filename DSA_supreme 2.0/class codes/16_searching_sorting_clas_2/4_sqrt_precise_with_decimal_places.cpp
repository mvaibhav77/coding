#include <bits/stdc++.h>
using namespace std;
long long int SquareRoot(int num)
{
    int ans = -1;
    int start = 0;
    int end = num;
    long long int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        // square ki value bhut badi hojaye toh range se bahar hojayega isiliyea long long int

        long long int square = mid * mid;

        if (square == num)
        {
            return mid;
        }
        else if (square < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

double precision(int num, int places, int temp)
{
    double ans = temp;
    double factor = 1;
    for (int i = 0; i < places; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < num; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int num;
    cout << "enter the number : ";
    cin >> num;

    int TemperarySol = SquareRoot(num);
    cout << TemperarySol << endl;
    
    int decimalPlaces;
    cout << "enter decimal places : " << endl;
    cin >> decimalPlaces;

    double precise = precision(num, decimalPlaces, TemperarySol);
    cout << precise;

    return 0;
}