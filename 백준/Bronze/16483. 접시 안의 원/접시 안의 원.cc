#include <iostream>
using namespace std;

//*	problem 5032
int main()
{
	unsigned int T;
	double result;
	cin >> T;
	T *= T;
	result = T * 0.25 + 0.5;
	cout << (int)result;

	return 0;
}