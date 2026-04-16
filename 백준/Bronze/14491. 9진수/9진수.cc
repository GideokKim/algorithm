#include <iostream>
using namespace std;


//*	problem 15873
#include <string>
int main()
{
	int GivenNumber;
	string ConvertedNumber = "";
	cin >> GivenNumber;
	while (GivenNumber % 9 != 0 || GivenNumber / 9 != 0)
	{
		ConvertedNumber = to_string(GivenNumber % 9) + ConvertedNumber;
		GivenNumber /= 9;
	}

	cout << ConvertedNumber;

	return 0;
}