#include <iostream>
using namespace std;

//*	problem 16395
int main()
{
	unsigned long long n, k;
	unsigned long long nCk = 1;
	cin >> n >> k;

	n--;
	k--;
	k = k < n - k ? k : n - k;

	for (int i = 0; i < k; i++)
		nCk *= (n - i);

	for (int i = 1; i <= k; i++)
		nCk /= i;

	cout << nCk;

	return 0;
}