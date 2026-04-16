#include <iostream>
using namespace std;

//*	problem 10474
int main()
{
	unsigned long long numerator, denominator;
	cin >> numerator >> denominator;

	while (numerator * denominator)
	{
		unsigned long long  quota = numerator / denominator;
		cout << quota << " " << numerator - quota * denominator << " / " << denominator << "\n";
		cin >> numerator >> denominator;
	}

	return 0;
}