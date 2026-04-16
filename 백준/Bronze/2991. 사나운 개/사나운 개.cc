#include <iostream>
#pragma warning(disable:4996)
using namespace std;


//*	problem 2991
int main()
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	int dogRoutine1 = A + B;
	int dogRoutine2 = C + D;

	for (int i = 0; i < 3; i++)
	{
		int dogAttack = 0;
		int visitor;
		cin >> visitor;

		if (visitor % dogRoutine1 <= A && visitor % dogRoutine1 > 0)
			dogAttack++;
		if (visitor % dogRoutine2 <= C && visitor % dogRoutine1 > 0)
			dogAttack++;

		cout << dogAttack << "\n";
	}

	return 0;
}