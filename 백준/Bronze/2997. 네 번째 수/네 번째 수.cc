#include <iostream>
#pragma warning(disable:4996)
using namespace std;


//*	problem 2997
#include <queue>
int main()
{
	int number[3];
	priority_queue<int> quNumber;
	for (int i = 0; i < 3; i++)
	{
		cin >> number[0];
		quNumber.push(number[0]);
	}

	for (int i = 0; i < 3; i++)
	{
		number[i] = quNumber.top();
		quNumber.pop();
	}

	int distance1 = number[0] - number[1];
	int distance2 = number[1] - number[2];

	if (distance1 > distance2)
		cout << number[1] + distance2;
	else if (distance1 < distance2)
		cout << number[1] - distance1;
	else
		cout << number[0] + distance1;

	return 0;
}