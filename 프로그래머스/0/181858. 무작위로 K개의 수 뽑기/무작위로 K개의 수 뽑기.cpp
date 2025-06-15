#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    answer.reserve(k);
    for (auto target : arr) {
        if(std::find(answer.begin(), answer.end(), target) == answer.end()) {
            answer.emplace_back(target);
            if (answer.size() == static_cast<size_t>(k)) {
                break;
            }
        }
    }
    
    int current_size = static_cast<int>(answer.size());
    for (int i = current_size; i < k; ++i) {
        answer.emplace_back(-1);
    }
    return answer;
}