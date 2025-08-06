#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    std::vector<int> primes = {2};
    
    for (int num = 3; num < 3000; ++num) {
        bool is_prime = true;
        for (auto target : primes) {
            if (num % target == 0) {
                is_prime = false;
                break;
            }
        }
        
        if (is_prime) {
            primes.emplace_back(num);
        }
    }

    for (size_t i = 0; i < nums.size() - 2; ++i) {
        for (size_t j = i + 1; j < nums.size() - 1; ++j) {
            for (size_t k = j + 1; k < nums.size(); ++k) {
                int target = nums[i] + nums[j] + nums[k];
                if (std::find(primes.begin(), primes.end(), target) != primes.end()) {
                    ++answer;
                }
            }
        }
    }

    return answer;
}