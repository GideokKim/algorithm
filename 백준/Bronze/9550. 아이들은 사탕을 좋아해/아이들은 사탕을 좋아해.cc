#include <iostream>
using namespace std;

//*	problem 9550
int main()
{
	int T, N, K;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N >> K;
		int friends = 0;

		for (int j = 0; j < N; j++)
		{
			int candy;
			cin >> candy;
			friends += candy / K;
		}
		cout << friends << "\n";
	}

	return 0;
}