#include <iostream>
using namespace std;

//*	problem 4880
int main()
{
	long long a1, a2, a3;
	cin >> a1 >> a2 >> a3;

	while (a1 != a2)
	{
		if (2 * a2 == a1 + a3)
			cout << "AP " << a3 + a2 - a1 << "\n";
		else
			cout << "GP " << a3 * a2 / a1 << "\n";
		cin >> a1 >> a2 >> a3;
	}

	return 0;
}