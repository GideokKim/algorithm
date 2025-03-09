#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    answer.resize(2, -1);
    for (size_t index = 0; index < array.size(); ++index) {
        if (answer[0] < array[index]) {
            answer[0] = array[index];
            answer[1] = index;
        }
    }
    return answer;
}