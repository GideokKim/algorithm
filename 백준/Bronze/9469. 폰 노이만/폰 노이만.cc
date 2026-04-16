#include <iostream>

int main()
{
	unsigned int P, N;
	std::cin >> P;
	double D, A, B, F;

	for (auto index = 0; index < P; index++)
	{
		std::cin >> N >> D >> A >> B >> F;
		std::cout << N << " " << (D * F) / (A + B) << "\n";
	}

	return 0;
}