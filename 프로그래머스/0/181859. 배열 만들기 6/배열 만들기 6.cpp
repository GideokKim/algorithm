#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i = 0;
    
    for (auto target : arr) {
        if (answer.empty()) {
            answer.push_back(target);
        } else {
            if (answer.back() == target) {
                answer.pop_back();
            } else {
                answer.push_back(target);
            }
        }
        ++i;
    }
    if (answer.empty()) {
        answer.push_back(-1);
    }
    return answer;
}