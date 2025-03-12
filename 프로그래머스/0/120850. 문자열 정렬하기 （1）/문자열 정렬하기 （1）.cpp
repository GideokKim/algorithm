#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (auto target : my_string) {
        if (std::isdigit(target)) {
            answer.push_back(static_cast<int>(target - '0'));
        }
    }
    std::sort(answer.begin(), answer.end());
    return answer;
}