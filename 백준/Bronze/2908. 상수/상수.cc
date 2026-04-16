#include <iostream>
using namespace std;

//*	problem 2908
int main()
{
	int num1, num2, result;
	cin >> num1 >> num2;
	num1 = num1 / 100 + num1 / 10 % 10 * 10 + num1 % 10 * 100;
	num2 = num2 / 100 + num2 / 10 % 10 * 10 + num2 % 10 * 100;
	result = num1 > num2 ? num1 : num2;
	cout << result;
	return 0;
}