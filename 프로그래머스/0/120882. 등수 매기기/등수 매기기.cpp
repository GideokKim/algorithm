#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size(), 0);
    for (size_t i = 0; i < score.size(); ++i) {
        answer[i] = score[i][0] + score[i][1];
    }
    
    std::vector<int> rank = answer;
    std::sort(rank.rbegin(), rank.rend());
    std::vector<bool> is_applied(answer.size(), false);
    
    for (int index = 0; index < rank.size(); ++index) {
        for (size_t i = 0; i < answer.size(); ++i) {
            if (answer[i] == rank[index] && !is_applied[i]) {
                answer[i] = index + 1;
                is_applied[i] = true;
            }
        }
    }
    
    return answer;
}