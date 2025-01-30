#include <iostream>
#pragma warning(disable:4996)
using namespace std;

int main()
{
	int n = 0;
	int a = 0;
	int b = 0;
	cin >> n;
	int n1 = n;
	int index = 0;

	while ((n != n1) || (index == 0))
	{
		a = n1 / 10;
		b = n1 % 10;
		
		n1 = b * 10 + (a + b) % 10;
		index++;
	};
	cout << index;

	return 0;
}