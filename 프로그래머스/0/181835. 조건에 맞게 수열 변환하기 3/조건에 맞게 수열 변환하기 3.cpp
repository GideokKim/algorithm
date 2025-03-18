#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    answer.resize(arr.size());
    if (k % 2) {
        for (size_t index = 0; index < answer.size(); ++index) {
            answer[index] = arr[index] * k;
        }
    } else {
        for (size_t index = 0; index < answer.size(); ++index) {
            answer[index] = arr[index] + k;
        }
    }
    return answer;
}