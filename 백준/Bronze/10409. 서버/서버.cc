#include <iostream>
using namespace std;


//*	problem 10409
int main()
{
	int n, T, taskTime;
	int totalTime = 0, taskNumber = 0;
	cin >> n >> T;

	for (int i = 1; i <= n; i++)
	{
		cin >> taskTime;
		totalTime += taskTime;
		taskNumber = totalTime <= T ? i : taskNumber;
	}

	cout << taskNumber;

	return 0;
}