#include <iostream>
#pragma warning(disable:4996)
using namespace std;

//*	problem 2765
#define PI			3.1415927
int main()
{
	double diameter, rotation, time;
	int i = 0;

	cout << fixed;
	cout.precision(2);

	while (cin >> diameter >> rotation >> time)
	{
		if (rotation)
		{
			i++;
			double distance = diameter * PI * rotation / 12 / 5280;
			cout << "Trip #" << i << ": " << distance << " " << distance * 3600 / time << "\n";
		}
	}

	return 0;
}