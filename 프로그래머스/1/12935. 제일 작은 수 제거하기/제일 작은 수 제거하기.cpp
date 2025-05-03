#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_value = arr[0];
    for (size_t index = 1; index < arr.size(); ++index) {
        if (arr[index] < min_value) {
            min_value = arr[index];
        }
    }
    for (size_t index = 0; index < arr.size(); ++index) {
        if (arr[index] == min_value) {
            continue;
        }
        answer.push_back(arr[index]);
    }
    if (answer.empty()) {
        answer.push_back(-1);
    }
    return answer;
}