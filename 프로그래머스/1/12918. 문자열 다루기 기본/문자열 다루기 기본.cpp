#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if (s.size() == 4 || s.size() == 6) {
        for (auto target : s) {
            if (!std::isdigit(target)) {
                answer = false;
                break;
            }
        }
    } else {
        answer = false;
    }
    return answer;
}