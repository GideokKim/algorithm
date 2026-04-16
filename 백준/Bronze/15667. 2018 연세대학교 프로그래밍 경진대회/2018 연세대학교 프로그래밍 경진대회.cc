#include <iostream>
using namespace std;

//*	problem 15667
int main()
{
	int N;
	cin >> N;

	for (int i = 2; i <= 101; i++)
	{
		if (N < i * i)
		{
			cout << i - 1;
			break;
		}
	}

	return 0;
}