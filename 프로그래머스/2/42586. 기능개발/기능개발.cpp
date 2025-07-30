#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    size_t index = 0;
    while (index < progresses.size()) {
        if (progresses[index] < 100) {
            for (size_t i = 0; i < progresses.size(); ++i) {
                progresses[i] += speeds[i];
            }
        } else {
            answer.emplace_back(0);
            for (size_t i = index; i < progresses.size(); ++i) {
                if (progresses[i] < 100) {
                    index = i;
                    break;
                }
                ++answer.back();
                ++index;
            }
        }
    }
    return answer;
}