#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main(void) {
	unsigned long long InputNumber;
	cin >> InputNumber;
	bitset<50> number(InputNumber);
	string BinaryNumber = number.to_string();
	cout << BinaryNumber.substr(BinaryNumber.find("1"));

	return 0;
}