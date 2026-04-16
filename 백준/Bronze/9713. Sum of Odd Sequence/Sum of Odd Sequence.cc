#include <iostream>
using namespace std;

int main()
{
	int T, N;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
		cin >> N;
		N = N % 2 == 0 ? N : N + 1;
		N /= 2;
		cout << N * N << "\n";
	}

	return 0;
}