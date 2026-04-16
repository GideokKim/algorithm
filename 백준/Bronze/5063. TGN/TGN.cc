#include <iostream>
using namespace std;

//*	problem 5063
int main()
{
	long long r, e, c, choice;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> r >> e >> c;
		choice = r - e + c;

		if (choice > 0)
			cout << "do not advertise\n";
		else if (choice < 0)
			cout << "advertise\n";
		else
			cout << "does not matter\n";
	}

	return 0;
}