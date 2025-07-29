#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 2;
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    }
    
    long long num_minus_2 = 1;
    long long num_minus_1 = 2;
    
    for (long long num = 3; num <= n; ++num) {
        answer = (num_minus_2 + num_minus_1) % 1234567;
        num_minus_2 = num_minus_1;
        num_minus_1 = answer;
    }
    return answer;
}