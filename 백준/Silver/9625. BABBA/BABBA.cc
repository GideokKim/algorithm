#include <iostream>
using namespace std;

//*	problem 9625
int main(void) {
	int A = 1;
	int B = 0;
	int K;
	cin >> K;

	for (int i = 0; i < K; i++)
	{
		int tmp = A;
		A = B;
		B = tmp + B;
	}

	cout << A << " " << B;

	return 0;
}