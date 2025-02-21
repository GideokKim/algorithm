#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    answer.resize(n);
    for (size_t index = 0; index < n; ++index) {
        answer[index] = static_cast<long long>(index) + 1;
        answer[index] *= static_cast<long long>(x);
    }
    return answer;
}