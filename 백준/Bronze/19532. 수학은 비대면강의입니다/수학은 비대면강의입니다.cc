#include <iostream>
using namespace std;

//*	problem 5724
int main()
{
	int A[4] = { 0, };
	int b[2] = { 0, };
	int determinant;

	for (int i = 0; i < 2; i++)
	{
		cin >> A[2 * i];
		cin >> A[2 * i + 1];
		cin >> b[i];
	}
	determinant = A[0] * A[3] - A[1] * A[2];
	cout << (A[3] * b[0] - A[1] * b[1]) / determinant << " " << (A[0] * b[1] - A[2] * b[0]) / determinant;

	return 0;
}