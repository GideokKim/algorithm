#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    for (auto target : dic) {
        size_t count = 0;
        for (auto check : spell) {
            if (target.find(check) != std::string::npos
                && target.find(check) == target.rfind(check)) {
                ++count;
            }
        }
        if (count == spell.size()) {
            answer = 1;
            break;
        }
    }
    return answer;
}