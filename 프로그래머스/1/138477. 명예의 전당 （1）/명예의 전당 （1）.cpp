#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    std::vector<int> top_k_score;
    for (auto target : score) {
        top_k_score.emplace_back(target);
        std::sort(top_k_score.rbegin(), top_k_score.rend());
        if (top_k_score.size() > static_cast<size_t>(k)) {
            top_k_score.pop_back();
        }
        answer.emplace_back(top_k_score.back());
    }
    return answer;
}