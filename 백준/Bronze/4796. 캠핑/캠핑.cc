#include <iostream>
using namespace std;

//*	problem 4796
int main()
{
	unsigned long long L, P, V, day;
	cin >> L >> P >> V;
	unsigned long long index = 1;
	while(L)
	{
		day = L * (V / P);
		day = V % P < L ? day + V % P : day + L;
		cout << "Case " << index << ": " << day << "\n";
		cin >> L >> P >> V;
		index++;
	}

	return 0;
}