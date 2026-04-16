#include <iostream>
using namespace std;

//*	problem 10419
int main()
{
	int T, d;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> d;

		int t;
		for (t = 0; t * (t + 1) <= d; t++)
			continue;
		cout << t - 1 << "\n";
	}

	return 0;
}