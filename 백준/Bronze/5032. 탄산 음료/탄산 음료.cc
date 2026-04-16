#include <iostream>
using namespace std;

//*	problem 5032
int main()
{
	unsigned int e, f, c, newDrink, result, emptyDrink;
	cin >> e >> f >> c;
	newDrink = (e + f) / c;
	result = newDrink;
	emptyDrink = newDrink + (e + f) % c;
	while (emptyDrink >= c)
	{
		newDrink = emptyDrink / c;
		result += newDrink;
		emptyDrink = newDrink + emptyDrink % c;
	}

	cout << result;

	return 0;
}