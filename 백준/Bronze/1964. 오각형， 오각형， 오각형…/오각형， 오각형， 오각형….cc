#include <iostream>
using namespace std;

//*	problem 1964
int main(void) {

	unsigned long long N;
	cin >> N;
	unsigned long long ModN = N % 45678;
	cout << (1 + (5 + 3 * ModN) * ModN / 2) % 45678;

	return 0;
}