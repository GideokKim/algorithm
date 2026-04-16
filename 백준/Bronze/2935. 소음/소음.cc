#include <iostream>
using namespace std;

//*	problem 2935
#include <bitset>
#include <string>
#include <sstream>
int main(void) {
	string InputOperator, InputNumber1, InputNumber2;
	cin >> InputNumber1 >> InputOperator >> InputNumber2;
	istringstream stream1(InputNumber1);
	istringstream stream2(InputNumber2);
	bitset<201> bitsetNumber1;
	bitset<201> bitsetNumber2;
	stream1 >> bitsetNumber1;
	stream2 >> bitsetNumber2;

	if (InputOperator.compare("+") == 0)
	{
		auto ResultAnd = bitsetNumber1 & bitsetNumber2;
		if (ResultAnd.any())
		{
			cout << 2;
			for (int i = 1; i < InputNumber1.size(); i++)
				cout << 0;
			return 0;
		}
		auto ResultOR = bitsetNumber1 | bitsetNumber2;
		string BinaryNumber = ResultOR.to_string();
		int index = BinaryNumber.find("1");
		if (index < 0)
			index = BinaryNumber.size() - 1;
		cout << BinaryNumber.substr(index);
	}
	else
	{
		if (bitsetNumber2.none())
		{
			cout << "0";
			return 0;
		}
		bitsetNumber1 <<= (InputNumber2.size()-1);
		string BinaryNumber = bitsetNumber1.to_string();
		int index = BinaryNumber.find("1");
		if (index < 0)
			index = BinaryNumber.size() - 1;
		cout << BinaryNumber.substr(index);
	}

	return 0;
}