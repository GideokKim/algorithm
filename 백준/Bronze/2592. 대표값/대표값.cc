#include <iostream>
using namespace std;

//*	problem 2592
#include <vector>
int main(void) {

	vector<int> arrScore[10];
	int index;
	int maxIndex = 0;
	int average = 0;
	int count = 0;
	int mode = 0;


	for (int i = 0; i < 10; i++)
	{
		int inputScore;
		cin >> inputScore;
		for (index = 0; index < 10; index++)
		{
			if (arrScore[index].size() == 0)
			{
				arrScore[index].push_back(inputScore);
				break;
			}
			else
			{
				if (arrScore[index].front() == inputScore)
				{
					arrScore[index].push_back(inputScore);
					break;
				}
				else
					continue;
			}
		}
		maxIndex = maxIndex > index ? maxIndex : index;
	}
	
	for (int i = 0; i <= maxIndex; i++)
	{
		int previousCount = count;
		average += arrScore[i].size() * arrScore[i].front();
		count = count > arrScore[i].size() ? count : arrScore[i].size();
		if (previousCount != count)
			mode = arrScore[i].front();
	}
	
	cout << average / 10 << "\n" << mode;

	return 0;
}