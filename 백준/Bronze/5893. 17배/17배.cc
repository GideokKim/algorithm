#include <iostream>
using namespace std;

//*	problem 2935
#include <string>
#include <sstream>
int main()
{
	string strLineS;
	string strNumber1;
	string strNumber2;
	string strResult;
	string strConvertedString;
	unsigned int nNextDigit = 0;
	unsigned int nOneBinary;
	unsigned int nMinlength;
	unsigned int strNumber1Size, strNumber2Size;
	bool IsSameLength = false;
	int nResize;

	getline(cin, strLineS);
	stringstream linestream(strLineS);
	getline(linestream, strNumber1);
	strNumber2 = strNumber1 + "0000";

	nResize = strNumber1.find('1');
	if (nResize < 0)
		strNumber1 = "0";
	else
		strNumber1 = strNumber1.substr(nResize);

	nResize = strNumber2.find('1');
	if (nResize < 0)
		strNumber2 = "0";
	else
		strNumber2 = strNumber2.substr(nResize);

	if (strNumber1.size() > strNumber2.size())
		nMinlength = strNumber2.size();
	else if (strNumber1.size() < strNumber2.size())
	{
		nMinlength = strNumber1.size();
		string strTmp = strNumber1;
		strNumber1 = strNumber2;
		strNumber2 = strTmp;
	}
	else
	{
		nMinlength = strNumber1.size();
		IsSameLength = true;
	}

	for (int i = 0; i < nMinlength; i++)
	{
		nOneBinary = strNumber1.back() - '0' + strNumber2.back() - '0' + nNextDigit;
		nNextDigit = nOneBinary / 2;
		stringstream ssConverti2s;
		ssConverti2s << (nOneBinary % 2);
		ssConverti2s >> strConvertedString;
		strResult = strConvertedString + strResult;

		strNumber1.pop_back();
		strNumber2.pop_back();
	}

	if (IsSameLength)
	{
		stringstream ssConverti2s;
		ssConverti2s << nNextDigit;
		ssConverti2s >> strConvertedString;
		strResult = strConvertedString + strResult;
	}
	else
	{
		while (strNumber1.size())
		{
			nOneBinary = strNumber1.back() - '0' + nNextDigit;

			nNextDigit = nOneBinary / 2;
			stringstream ssConverti2s;
			ssConverti2s << (nOneBinary % 2);
			ssConverti2s >> strConvertedString;
			strResult = strConvertedString + strResult;

			strNumber1.pop_back();
		}

		stringstream ssConverti2s;
		ssConverti2s << nNextDigit;
		ssConverti2s >> strConvertedString;
		strResult = strConvertedString + strResult;
	}

	nResize = strResult.find('1');
	if (nResize < 0)
		cout << "0";
	else
		cout << strResult.substr(nResize);

	return 0;
}