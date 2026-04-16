#include <iostream>
using namespace std;

//*	problem 1026
#include <queue>
int main(void) {

	priority_queue< int, vector<int>, greater<int> > A;
	priority_queue< int, vector<int>, less<int> > B;
	int N;
	int tmp;
	int result = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		A.push(tmp);
	}

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		B.push(tmp);
	}

	for (int i = 0; i < N; i++)
	{
		result += A.top() * B.top();
		A.pop();
		B.pop();
	}

	cout << result;

	return 0;
}