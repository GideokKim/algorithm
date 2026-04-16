#include <iostream>
using namespace std;

//*	problem 5724
int main()
{
	unsigned long long N;
	cin >> N;

	while (N != 0)
	{
		cout << N * (N + 1) * (2 * N + 1) / 6 << "\n";
		cin >> N;
	}

	return 0;
}