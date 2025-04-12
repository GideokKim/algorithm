#include <cmath>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long sqrt_n = static_cast<long long>(std::sqrt(n));
    if (sqrt_n * sqrt_n != n) {
        answer = -1;
    } else {
        answer = (sqrt_n + 1) * (sqrt_n + 1);
    }
    return answer;
}