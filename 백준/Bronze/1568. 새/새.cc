#include <iostream>
using namespace std;

//*	problem 1568
unsigned long long arrSum[100000] = { 0, };

int main()
{
	unsigned long long N;
	unsigned long long time = 0;
	unsigned long long timeSum = 0;
	cin >> N;
	while (arrSum[time] < N)
	{
		time++;
		arrSum[time] = time * (time + 1) / 2;
	}

	while (N)
	{
		if (N != arrSum[time])
			time = time >= 0 ? time - 1 : 0;

		N -= arrSum[time];
		timeSum += time;
		time = 0;

		while (arrSum[time] < N)
			time++;
	}

	cout << timeSum;
	return 0;
}