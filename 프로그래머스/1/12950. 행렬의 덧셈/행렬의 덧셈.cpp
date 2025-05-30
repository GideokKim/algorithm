#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    answer.resize(arr1.size(), std::vector<int>(arr1[0].size(), 0));
    
    for (size_t i = 0; i < arr1.size(); ++i) {
        for (size_t j = 0; j < arr1[0].size(); ++j) {
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return answer;
}