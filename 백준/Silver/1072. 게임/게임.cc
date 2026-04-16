#include <iostream>
using namespace std;

//*	problem 1072
int main()
{
	long long X, Y, Z, extraGames;
	cin >> X >> Y;

	Z = Y * 100 / X;

	if (Z >= 99)
		cout << -1;
	else
	{
		extraGames = (X * (Z + 1) - 100 * Y) / (99 - Z);
		extraGames = (X * (Z + 1) - 100 * Y) % (99 - Z) == 0 ? extraGames : extraGames + 1;
		
		cout << extraGames;
	}

	return 0;
}