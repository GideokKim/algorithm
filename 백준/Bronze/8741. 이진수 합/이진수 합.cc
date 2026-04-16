#include <iostream>
using namespace std;

//*	problem 8741
#include <string>
int main()
{
	int GivenNumber;
	string ConvertedNumberfront = "1";
	string ConvertedNumberend = "";
	cin >> GivenNumber;
	for (int i = 1; i < GivenNumber; i++)
	{
		ConvertedNumberfront += "1";
		ConvertedNumberend += "0";
	}

	cout << ConvertedNumberfront << ConvertedNumberend;

	return 0;
}