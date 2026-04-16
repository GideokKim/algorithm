#include <iostream>
using namespace std;

//*	problem 16917
int main()
{
	long long A, B, C, X, Y;
	cin >> A >> B >> C >> X >> Y;

	if (A >= 2 * C)
	{
		if (X >= Y)
			cout << 2 * C * X;
		else
		{
			if (B >= 2 * C)
				cout << 2 * C * Y;
			else
				cout << 2 * C * X + B * (Y - X);
		}
	}
	else if (B >= 2 * C)
	{
		if (X <= Y)
			cout << 2 * C * Y;
		else
			cout << A * (X - Y) + 2 * C * Y;
	}
	else if (A + B >= 2 * C)
	{
		if (X < Y)
			cout << 2 * C * X + B * (Y - X);
		else if (X > Y)
			cout << A * (X - Y) + 2 * C * Y;
		else
			cout << 2 * C * X;
	}
	else
		cout << A * X + B * Y;

	return 0;
}