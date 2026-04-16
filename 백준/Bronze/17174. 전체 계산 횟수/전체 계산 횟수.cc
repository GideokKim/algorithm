#include <iostream>
using namespace std;

//*	problem 5032
int main()
{
	unsigned int N, M, result;
	cin >> N >> M;
	result = N;
	while (N / M != 0)
	{
		N /= M;
		result += N;
	}

	cout << result;

	return 0;
}