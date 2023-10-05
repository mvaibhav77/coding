#include <bits/stdc++.h>
using namespace std;
int SquareRoot(int num)
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
int main()
{
    int num;
    cout << "enter the number : ";
    cin >> num;

    int answer = SquareRoot(num);
    cout << "the square root of num is: " << answer << endl;
    return 0;
}