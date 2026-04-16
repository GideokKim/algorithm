#include <iostream>
#include <bitset>
using namespace std;
string number;
bitset<100000> A, B, C;

//*	problem 14623
int main()
{
	cin >> number;
	bitset<100000> A(number);
	cin >> number;
	bitset<100000> B(number);

	C = (A & B);
	cout << C << "\n";
	C = (A | B);
	cout << C << "\n";
	C = (A ^ B);
	cout << C << "\n";
	C = (~A);
	cout << C << "\n";
	C = (~B);
	cout << C << "\n";

	return 0;
}