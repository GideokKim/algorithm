#include <iostream>
using namespace std;


//*	problem 2729
#include <bitset>
#include <string>
#include <sstream>
int main(void) {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string InputNumber1, InputNumber2;
		cin >> InputNumber1 >> InputNumber2;
		istringstream stream1(InputNumber1);
		istringstream stream2(InputNumber2);
		bitset<81> bitsetNumber1;
		bitset<81> bitsetNumber2;
		stream1 >> bitsetNumber1;
		stream2 >> bitsetNumber2;

		auto ResultXOR = bitsetNumber1 ^ bitsetNumber2;
		auto ResultAnd = bitsetNumber1 & bitsetNumber2;
		
		while (ResultAnd.any())
		{
			auto ResultAndShift = ResultAnd << 1;
			ResultAnd = ResultAndShift & ResultXOR;
			ResultXOR = ResultAndShift ^ ResultXOR;
		}
		string BinaryNumber = ResultXOR.to_string();
		int index = BinaryNumber.find("1");
		if (index < 0)
			index = BinaryNumber.size() - 1;
		cout << BinaryNumber.substr(index) << "\n";
	}

	return 0;
}