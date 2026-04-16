#include <iostream>
using namespace std;

//*	problem 14920
int main()
{
	int C1;
	int index = 1;
	cin >> C1;

	while (C1 != 1)
	{
		if (C1 % 2 == 0)
			C1 /= 2;
		else
			C1 = 3 * C1 + 1;
		index++;
	}
	cout << index;

	return 0;
}