#include <iostream>
using namespace std;

//*	problem 13300
int main(void) {
	int N, K;
	cin >> N >> K;
	int arrInformation[2][6] = { 0, };
	int Room = 0;

	for (int i = 0; i < N; i++)
	{
		int S, Y;
		cin >> S >> Y;
		arrInformation[S][Y - 1] += 1;
	}

	for (int i = 0; i < 12; i++)
	{
		int Students = arrInformation[i / 6][i % 6];
		if (Students % K)
			Room += 1;
		Room += Students / K;
	}

	cout << Room;

	return 0;
}