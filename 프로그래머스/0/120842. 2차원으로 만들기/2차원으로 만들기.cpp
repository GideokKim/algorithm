#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    answer.resize(num_list.size() / n, std::vector<int>(n, 0));
    for (size_t index = 0; index < num_list.size(); index += n) {
        for (size_t y_index = 0; y_index < n; ++y_index) {
            auto x_index = index / n;
            answer[x_index][y_index] = num_list[index + y_index];
        }
    }
    return answer;
}