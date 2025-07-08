#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    int col = 0;
    for (int row = 3; row < brown; ++row) {
        if (sum % row) {
            continue;
        }
        col = sum / row;
        if ((row - 2) * (col - 2) == yellow) {
            answer.emplace_back(row);
            answer.emplace_back(col);
            break;
        }
    }
    std::sort(answer.rbegin(), answer.rend());
    return answer;
}