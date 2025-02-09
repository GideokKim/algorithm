#include <algorithm>

int solution(int n) {
    int answer = 0;
    // int sqrt_n = static_cast<int>(std::sqrt(n));
    
    for (int number = 1; number <= n; ++number) {
        if (n % number == 0) {
            ++answer;
        }
    }
    
    return answer;
}