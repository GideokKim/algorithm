#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int compute_n = n;
    for (size_t divisor = 2; divisor <= 10000; ++divisor) {
        if (compute_n == 1) {
            break;
        }
        while (compute_n % divisor == 0) {
            compute_n /= divisor;
            if (answer.empty() || answer.back() != divisor) {
                answer.push_back(divisor);
            }
        }
    }
    return answer;
}