#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    std::sort(num_list.begin(), num_list.end());
    vector<int> answer;
    answer.resize(num_list.size() - 5);
    for (size_t index = 5; index < num_list.size(); ++index) {
        answer[index - 5] = num_list[index];
    }
    return answer;
}