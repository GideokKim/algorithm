#include <iostream>
using namespace std;

//*	problem 14489
int main()
{
	unsigned long long A, B, C;
	cin >> A >> B >> C;

	if (A + B < 2 * C)
		cout << A + B;
	else
		cout << A + B - 2 * C;

	return 0;
}