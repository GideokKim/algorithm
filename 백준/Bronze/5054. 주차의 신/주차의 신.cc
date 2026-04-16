#include <iostream>
using namespace std;

//*	problem 5054
int main(void)
{
	int t, n;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int number;
		int minimum = 100;
		int maximum = 0;

		for (int j = 0; j < n; j++)
		{
			cin >> number;
			minimum = minimum < number ? minimum : number;
			maximum = maximum > number ? maximum : number;
		}
		cout << 2 * (maximum - minimum) << "\n";
	}

	return 0;
}