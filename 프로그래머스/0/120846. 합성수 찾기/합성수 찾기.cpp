#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (size_t number = 1; number <= n; ++number) {
        size_t number_of_dvisors = 0;
        for (size_t divisor = 1; divisor <= number; ++divisor) {
            if (number % divisor == 0) {
                ++number_of_dvisors;
            }
        }
        if (number_of_dvisors >= 3) {
            ++answer;
        }
    }
    return answer;
}