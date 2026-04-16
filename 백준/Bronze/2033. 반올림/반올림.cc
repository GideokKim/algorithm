#include <iostream>
using namespace std;

//*	problem 9610
int main()
{
	unsigned long long N;
	unsigned long long decimal = 10;
	int index = 0;
	cin >> N;

	while (decimal < N)
	{
		unsigned long long extraction = N % decimal;
		unsigned long long round = 1;
		for (int i = 0; i < index; i++)
			round *= 10;
		extraction /= round;
		extraction *= round;
		

		if (extraction < 5 * round)
			N -= extraction;
		else
			N += (decimal - extraction);

		decimal *= 10;
		index++;
	}

	cout << N;

	return 0;
}