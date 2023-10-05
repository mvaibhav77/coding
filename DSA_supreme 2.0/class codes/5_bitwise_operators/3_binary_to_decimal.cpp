#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
	int decimal = 0;
	int i = 0;
	while (n > 0)
	{
		int bit = n % 10; // decimal mei karre toh 10 se operate karenge 

		decimal = decimal + bit * pow(2, i++);

		n/=10; //decimal mei karre toh 10 se operate karenge
	}
	return decimal;
}
int main()
{
	int n;
	cout << "Enter The Number : " << endl;
	cin >> n;
	int result = binaryToDecimal(n);
	cout << result << endl;
	return 0;
}