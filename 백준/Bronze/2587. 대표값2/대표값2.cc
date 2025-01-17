#include <iostream>
#include <queue>
using namespace std;

int main()
{
	priority_queue<unsigned int> qu;
	unsigned int number;
	unsigned int Total = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> number;
		Total += number;
		qu.push(number);
	}

	qu.pop();
	qu.pop();

	cout << Total / 5 << "\n" << qu.top();
	return 0;
}