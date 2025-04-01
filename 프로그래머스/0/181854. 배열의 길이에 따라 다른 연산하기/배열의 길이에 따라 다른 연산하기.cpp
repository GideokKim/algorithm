#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer(arr);
    size_t start_index = 1;
    if (answer.size() % 2) {
        --start_index;
    }
    
    for (size_t index = start_index; index < answer.size(); index += 2) {
        answer[index] += n;
    }
    
    return answer;
}