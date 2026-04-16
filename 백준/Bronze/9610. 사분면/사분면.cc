#include <iostream>
using namespace std;


//*	problem 9610
int main()
{
	int Q[5] = { 0, }, axis = 0;
	int n, x, y;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> x >> y;
		if (x * y == 0)
			axis++;
		else if (x * y > 0)
		{
			if (x > 0)
				Q[1]++;
			else
				Q[3]++;
		}
		else
		{
			if (x > 0)
				Q[4]++;
			else
				Q[2]++;
		}
	}

	for (int i = 1; i <= 4; i++)
		cout << "Q" << i << ": " << Q[i] << "\n";
	cout << "AXIS: " << axis;

	return 0;
}