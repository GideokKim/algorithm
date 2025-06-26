#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;

    for (size_t i = 0; i < t.size() - p.size() + 1; ++i) {
        std::string target = t.substr(i, p.size());
        for (size_t j = 0; j < target.size(); ++j) {
            if (target[j] > p[j]) {
                break;
            } else if (target[j] < p[j]) {
                ++answer;
                break;
            } else if (target[j] == p[j] && j == target.size() - 1) {
                ++answer;
            }
        }
    }
    return answer;
}