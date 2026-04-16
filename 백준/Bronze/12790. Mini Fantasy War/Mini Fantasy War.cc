#include <iostream>
using namespace std;

//*	problem 12790
int main()
{
	long long stats[4], tmp;
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < 4; j++)
			cin >> stats[j];

		for (int j = 0; j < 4; j++)
		{
			cin >> tmp;
			stats[j] += tmp;
		}

		stats[0] = stats[0] < 1 ? 1 : stats[0];
		stats[1] = stats[1] < 1 ? 1 : stats[1];
		stats[2] = stats[2] < 0 ? 0 : stats[2];
		
		cout << stats[0] + 5 * stats[1] + 2 * (stats[2] + stats[3]) << "\n";
	}

	return 0;
}