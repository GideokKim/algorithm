#include <iostream>
using namespace std;

//*	problem 3058
int main(void)
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int number;
		int total = 0;
		int minimum = 1000;

		for (int j = 0; j < 7; j++)
		{
			cin >> number;
			if (number % 2 == 0)
			{
				total += number;
				minimum = minimum < number ? minimum : number;
			}
		}
		cout << total << " " << minimum << "\n";
	}

	return 0;
}