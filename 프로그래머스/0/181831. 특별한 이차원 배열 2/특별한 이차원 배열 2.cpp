#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 1;
    size_t arr_size = arr.size();
    
    for (size_t i = 0; i < arr_size; ++i) {
        for (size_t j = i; j < arr_size; ++j) {
            if (arr[i][j] != arr[j][i]) {
                answer = 0;
                break;
            }
        }
    }
    return answer;
}