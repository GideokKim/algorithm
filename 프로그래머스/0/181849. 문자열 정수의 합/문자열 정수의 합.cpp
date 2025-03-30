#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for (auto target : num_str) {
        answer += static_cast<int>(target - '0');
    }
    return answer;
}