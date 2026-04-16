#include <iostream>
using namespace std;

//*	problem 9437
int main()
{
	int N, P, paperNumber;
	cin >> N;

	while (N)
	{
		cin >> P;
		if (P > N / 2)
			paperNumber = N + 1 - P;
		else
			paperNumber = P;

		if (paperNumber == N / 2)
			paperNumber = paperNumber % 2 + paperNumber / 2;
		else
			paperNumber = (paperNumber % (N / 2)) % 2 + (paperNumber % (N / 2)) / 2;
		
		int printNumber[4] = { 2 * paperNumber - 1, 2 * paperNumber, 0 ,0 };
		printNumber[2] = N - printNumber[0];
		printNumber[3] = printNumber[2] + 1;
		for (int i = 0; i < 4; i++)
		{
			if (printNumber[i] == P)
				continue;
			cout << printNumber[i];
			if (i == 3)
				break;
			else
				cout << " ";
		}
		cout << "\n";
		cin >> N;
	}

	return 0;
}