#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    std::string str_order = std::to_string(order);
    for (auto target : str_order) {
        if (target == '3' || target == '6' || target == '9') {
            answer++;
        }
    }
    return answer;
}