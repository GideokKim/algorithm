#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (auto target : arr) {
        if (target % divisor == 0) {
            answer.push_back(target);
        }
    }
    
    if (answer.size() == 0) {
        answer.push_back(-1);
    } else {
        std::sort(answer.begin(), answer.end());
    }
    return answer;
}