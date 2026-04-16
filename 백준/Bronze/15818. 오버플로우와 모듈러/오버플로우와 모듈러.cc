#include <iostream>
using namespace std;

//*	problem 15818
int main()
{
	long long N, M, tmp;
	long long result = 1;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		result = ((result % M) * (tmp % M)) % M;
	}

	cout << result;
	return 0;
}