#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    answer.resize(n, std::vector<int>(n, 0));
    for (int index = 0; index < n; ++index) {
        answer[index][index] = 1;
    }
    return answer;
}