#include <iostream>
using namespace std;

//*	problem 2740
#include <vector>
int main(void)
{
	int N, M, K;
	vector<int> A, B;

	cin >> N >> M;

	A.resize(N * M);
	for (int i = 0; i < N * M; i++)
	{
		cin >> A[i];
	}

	cin >> M >> K;

	B.resize(M * K);
	for (int i = 0; i < M * K; i++)
	{
		cin >> B[i];
	}

	for (int i = 0; i < N; i++)
	{
		
		for (int j = 0; j < K; j++)
		{
			int entry = 0;
			for (int l = 0; l < M; l++)
				entry += A.at(M * i + l) * B.at(K * l + j);
			cout << entry;
			if (j != K - 1)
				cout << " ";
		}
		if (i != N - 1)
			cout << "\n";
	}

	return 0;
}