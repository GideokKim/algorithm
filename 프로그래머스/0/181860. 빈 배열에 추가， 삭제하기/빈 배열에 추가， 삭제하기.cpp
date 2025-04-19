#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for (size_t index = 0; index < arr.size(); ++index) {
        if (flag[index]) {
            for (size_t i = 0; i < arr[index] * 2; ++i) {
                answer.push_back(arr[index]);
            }
        } else {
            for (size_t i = 0; i < arr[index]; ++i) {
                answer.pop_back();
            }
        }
    }
    return answer;
}