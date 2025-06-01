#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    size_t max_size = arr.size() > arr[0].size() ? arr.size() : arr[0].size();
    answer.resize(max_size, std::vector<int>(max_size, 0));
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr[0].size(); ++j) {
            answer[i][j] = arr[i][j];
        }
    }
    return answer;
}