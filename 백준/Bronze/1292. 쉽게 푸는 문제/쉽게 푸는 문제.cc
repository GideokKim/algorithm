#include <iostream>
using namespace std;

//*	problem 1292
int main()
{
	long long sequenceSum = 0;
	long long A, B, result;
	long long index = 0;

	cin >> A >> B;
	A--;
	while (sequenceSum < A)
	{
		index++;
		sequenceSum = index * (index + 1) / 2;
	}

	index = A != sequenceSum ? index - 1 : index;
	sequenceSum = index * (index + 1) / 2;

	result = index * (index + 1) * (2 * index + 1) / 6 + (A - sequenceSum) * (index + 1);

	while (sequenceSum < B)
	{
		index++;
		sequenceSum = index * (index + 1) / 2;
	}

	index = B != sequenceSum ? index - 1 : index;
	sequenceSum = index * (index + 1) / 2;

	result = index * (index + 1) * (2 * index + 1) / 6 + (B - sequenceSum) * (index + 1) - result;

	cout << result;

	return 0;
}