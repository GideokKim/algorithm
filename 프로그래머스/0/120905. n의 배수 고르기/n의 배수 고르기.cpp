#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    for (auto target : numlist) {
        if (target % n) {
            continue;
        }
        answer.push_back(target);
    }
    return answer;
}