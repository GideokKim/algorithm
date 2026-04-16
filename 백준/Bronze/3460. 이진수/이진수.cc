#include <iostream>
using namespace std;

//*	problem 3460
int main()
{
	unsigned int T, GivenNumber;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> GivenNumber;
		unsigned int lsb = 0;

		while (GivenNumber % 2 != 0 || GivenNumber / 2 != 0)
		{
			if (GivenNumber % 2 != 0)
				cout << lsb << " ";

			lsb++;
			GivenNumber /= 2;
		}
		cout << "\n";
	}

	return 0;
}