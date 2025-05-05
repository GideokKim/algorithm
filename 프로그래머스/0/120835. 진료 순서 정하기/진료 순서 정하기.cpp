#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    std::vector<int> answer(emergency.size(), 1);
    for (size_t target_index = 0; target_index < emergency.size(); ++target_index) {
        for (size_t index = 0; index < emergency.size(); ++index) {
            if (target_index == index) {
                continue;
            }
            if (emergency[target_index] < emergency[index]) {
                ++answer[target_index];
            }
        }
    }

    return answer;
}