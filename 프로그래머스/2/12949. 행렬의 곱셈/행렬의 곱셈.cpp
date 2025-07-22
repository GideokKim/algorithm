#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    answer.resize(arr1.size(), std::vector<int>(arr2[0].size(), 0));
    for (size_t i = 0; i < arr1.size(); ++i) {
        for (size_t j = 0; j < arr2[0].size(); ++j) {
            for (size_t k = 0; k < arr1[0].size(); ++k) {
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    return answer;
}