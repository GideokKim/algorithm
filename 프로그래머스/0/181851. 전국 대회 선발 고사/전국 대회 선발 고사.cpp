#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    std::vector<int> real_rank(rank.size() + 1, -1);
    for (size_t i = 0; i < rank.size(); ++i) {
        if (attendance[i]) {
            real_rank[rank[i]] = i;
        }
    }
    
    int weight = 10000;
    for (auto target : real_rank) {
        if (target == -1) {
            continue;
        }
        
        answer += target * weight;
        weight /= 100;
    }
    
    return answer;
}