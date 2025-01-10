#include <iostream>
#pragma warning(disable:4996)
using namespace std;

//*	problem 2460
int main()
{
	unsigned long long total = 0;
	unsigned long long In = 0;
	unsigned long long Out = 0;
	unsigned long long Max = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> Out >> In;
		total += (In - Out);
		Max = Max > total ? Max : total;
	}
	
	cout << Max;

	return 0;
}