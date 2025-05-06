#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    std::string number;
    for (auto target : my_string) {
        if ('0' <= target && target <= '9') {
            number += target;
        } else {
            if (number.size() != 0) {
                answer += std::stoi(number);
                number.clear();
            }
        }
    }
    if (number.size() != 0) {
        answer += std::stoi(number);
        number.clear();
    }
    return answer;
}