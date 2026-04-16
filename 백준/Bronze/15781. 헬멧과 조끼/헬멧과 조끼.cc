#include <iostream>
using namespace std;

//*	problem 15781
int main()
{
	int N, M;
	cin >> N >> M;
	unsigned long long h = 0, a = 0;
	unsigned long long tmp;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		h = h > tmp ? h : tmp;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		a = a > tmp ? a : tmp;
	}

	cout << h + a;

	return 0;
}