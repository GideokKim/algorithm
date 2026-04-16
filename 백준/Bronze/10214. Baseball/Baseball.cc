#include <iostream>
using namespace std;

//*	problem 10214
int main(void) {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int Yonsei = 0;
		int Korea = 0;

		for (int j = 0; j < 9; j++)
		{
			int ScoreY;
			int ScoreK;
			cin >> ScoreY >> ScoreK;
			Yonsei += ScoreY;
			Korea += ScoreK;
		}

		if (Yonsei > Korea)
			cout << "Yonsei\n";
		else if (Yonsei < Korea)
			cout << "Korea\n";
		else
			cout << "Draw\n";
	}

	return 0;
}