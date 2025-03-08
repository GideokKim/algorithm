#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int n_sqrt = static_cast<int>(std::sqrt(n)) + 1;
    for (int num = 1; num <= n_sqrt; ++num) {
        if (n % num == 0) {
            if (n /num != num ) { 
                answer.push_back(n / num);
            }
            
            answer.push_back(num);
        }
    }
    std::sort(answer.begin(), answer.end());
    return answer;
}