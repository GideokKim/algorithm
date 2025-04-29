#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    size_t answer_size = 1;
    while (answer_size < arr.size()) {
        answer_size <<= 1;
    }
    answer.resize(answer_size, 0);
    for (size_t index = 0; index < arr.size(); ++index) {
        answer[index] = arr[index];
    }
    return answer;
}