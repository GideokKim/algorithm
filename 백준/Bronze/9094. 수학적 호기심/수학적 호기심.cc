#include <iostream>
using namespace std;

//*	problem 9094
int main()
{
	int T, n, m;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> n >> m;
		int satisfy = 0;
		for (int a = 1; a < n - 1; a++)
		{
			for (int b = a + 1; b < n; b++)
			{
				if ((a * a + b * b + m) % (a * b) == 0)
					satisfy++;
			}
		}
		cout << satisfy << "\n";
	}

	return 0;
}