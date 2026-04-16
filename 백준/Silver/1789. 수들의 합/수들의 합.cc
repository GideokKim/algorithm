#include <iostream>
using namespace std;

//*	problem 1789
int main()
{
	unsigned long long N;
	unsigned long long precisionCheck;
	unsigned long long precision = 1;
	unsigned long long startSum, plusNumber;
	cin >> N;

	for (int i = 0; i < 5; i++)
	{
		precision *= 10;
		precisionCheck = precision * (precision + 1) / 2;
		if (N == precisionCheck)
		{
			cout << precision;
			return 0;
		}
		else if (N < precisionCheck)
		{
			precision /= 10;
			plusNumber = precision;
			startSum= precision * (precision + 1) / 2;
			break;
		}
	}
	while (startSum <= N)
	{
		plusNumber++;
		startSum += plusNumber;
	}
	plusNumber--;
	cout << plusNumber;

	return 0;
}