#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (auto target : my_string) {
        if ('a' <= target && target <= 'z') {
            continue;
        } else if ('A' <= target && target <= 'Z') {
            continue;
        }
        answer += static_cast<int>(target - '0');
    }
    return answer;
}