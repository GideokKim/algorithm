#include <iostream>
#include <list>
#define _USE_MATH_DEFINES
#include <math.h>
#pragma warning(disable:4996)
using namespace std;

void fun(long double a, long double b, long double h, long double* res)
{
	long double pprevious_fx = a * a;
	long double stepsize = h * 0.00001;
	int count = 1;
	long double x = stepsize * (long double)count;
	long double previous_fx = a * a * pow(M_E, -2 * x * x) + b * b * x + 2 * a * b * sqrt(x) * pow(M_E, -x * x);
	long double fx = 0.0;
	count++;
	x = stepsize * (long double)count;
	while (x < h + stepsize * 0.5)
	{
		fx = a * a * pow(M_E, -2 * x * x) + b * b * x + 2 * a * b * sqrt(x) * pow(M_E, -x * x);
		(*res) += (pprevious_fx + 4 * previous_fx + fx);
		pprevious_fx = fx;
		count++;
		x = stepsize * (long double)count;
		previous_fx = a * a * pow(M_E, -2 * x * x) + b * b * x + 2 * a * b * sqrt(x) * pow(M_E, -x * x);
		count++;
		x = stepsize * (long double)count;
	}
	(*res) *= M_PI * stepsize * (long double)0.333333333;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long double V = 0.0;
	cin >> V;
	int N = 0;
	cin >> N;
	long double a = 0.0;
	long double b = 0.0;
	long double h = 0.0;
	long double result = 0.0;
	long double* res = &result;
	cin >> a >> b >> h;
	fun(a, b, h, res);
	long double temp_result = 0.0;
	long double* temp = &temp_result;

	int index = 0;
	for (int i = 1; i < N; i++)
	{
		cin >> a >> b >> h;
		fun(a, b, h, temp);
		if (abs(V - temp_result) <= abs(V - result))
		{
			result = temp_result;
			index = i;
		}
		temp_result = 0.0;
	}
	cout << index << "\n";
	return 0;
}