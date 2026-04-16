#include <iostream>
using namespace std;

//*	problem 1748
long long files[1000] = { 0, };
int main()
{
	int N;
	cin >> N;
	long long clusterSize;
	long long totalClusterNumber = 0;

	for (int i = 0; i < N; i++)
		cin >> files[i];
	cin >> clusterSize;

	for (int i = 0; i < N; i++)
	{
		totalClusterNumber += files[i] / clusterSize;
		if (files[i] % clusterSize)
			totalClusterNumber++;
	}

	cout << totalClusterNumber * clusterSize;

	return 0;
}