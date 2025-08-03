#include <cmath>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    std::vector<int> prime = {2};
    
    bool is_prime;
    for (int num = 3; num <= n; num += 2) {
        is_prime = true;
        for (auto target : prime) {
            if (num % target == 0) {
                is_prime = false;
                break;
            }
            if (std::sqrt(num) < target) {
                break;
            }
        }
        if (is_prime) {
            prime.emplace_back(num);
        }
    }
    
    answer = static_cast<int>(prime.size());
    return answer;
}