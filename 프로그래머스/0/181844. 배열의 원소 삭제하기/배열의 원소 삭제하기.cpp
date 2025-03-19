#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    for (auto target : arr) {
        auto it = std::find(delete_list.begin(), delete_list.end(), target);
        if (it == delete_list.end()) {
            answer.push_back(target);
        }
    }
    return answer;
}