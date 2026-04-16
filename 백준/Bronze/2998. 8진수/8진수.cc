#include <iostream>
using namespace std;

#include <bitset>
#include <string>
int main(void) {
	string InputNumber;
	cin >> InputNumber;
	if (InputNumber.size() % 3 == 1)
		InputNumber = "00" + InputNumber;
	else if (InputNumber.size() % 3 == 2)
		InputNumber = "0" + InputNumber;

	for (int i = 0; i < InputNumber.size() / 3; i++)
	{
		bitset<3> number(InputNumber.substr(3 * i, 3));
		cout << number.to_ulong();;
	}

	return 0;
}