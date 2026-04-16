#include <iostream>
using namespace std;

//*	problem 10829
#include <bitset>
#include <string>
#include <sstream>
int main(void) {
	unsigned long long InputNumber;
	cin >> InputNumber;
	bitset<50> number(InputNumber);
	string BinaryNumber = number.to_string();
	BinaryNumber = BinaryNumber.substr(BinaryNumber.find("1"));

	string InverseBinaryNumber = "";
	for (int i = BinaryNumber.size(); i > 0; i--)
		InverseBinaryNumber += BinaryNumber[i - 1];

	istringstream stream(InverseBinaryNumber);
	bitset<50> InverseNumber;
	stream >> InverseNumber;
	cout << InverseNumber.to_ullong();

	return 0;
}