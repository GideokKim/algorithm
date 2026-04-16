#include <iostream>
using namespace std;

//*	problem 10610
#include <string>
#include <sstream>
#include <queue>

priority_queue<int> qu;

int main()
{
	string inputNumber, strNumber;
	cin >> inputNumber;

	int Nsize = inputNumber.size();
	int totalSum = 0;
	int tmpNumber;
	bool isPossible = false;

	for (int i = 0; i < Nsize; i++)
	{
		strNumber = inputNumber.at(i);
		istringstream(strNumber) >> tmpNumber;
		totalSum += tmpNumber;
		if (tmpNumber == 0)
			isPossible = true;
		qu.push(tmpNumber);
	}

	if (totalSum % 3 != 0)
		isPossible = false;

	if (isPossible)
	{
		while (!qu.empty())
		{
			cout << qu.top();
			qu.pop();
		}
	}
	else
		cout << -1;

	return 0;
}