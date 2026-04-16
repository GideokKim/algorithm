#include <iostream>
using namespace std;


//*	problem 9295
int main()
{
	int dice1, dice2;
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> dice1 >> dice2;
		cout << "Case " << i << ": " << dice1 + dice2 << "\n";
	}

	return 0;
}