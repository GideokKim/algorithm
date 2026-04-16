#include <iostream>
using namespace std;

//*	problem 1748
int main()
{
	long long N;
	long long totalPrecision = 0;
	long long limitCheck = 1;
	long long reflectedPrecision = 0;
	long long CurrentPrecision = 1;
	cin >> N;

	for (long long i = 0; i < 9; i++)
	{
		limitCheck *= 10;
		if (N < limitCheck)
		{
			cout << totalPrecision + (i + 1) * (N - reflectedPrecision);
			return 0;
		}
		else
		{
			reflectedPrecision = limitCheck - 1;
			totalPrecision += 9 * (i + 1) * CurrentPrecision;
			CurrentPrecision *= 10;
		}
	}

	return 0;
}