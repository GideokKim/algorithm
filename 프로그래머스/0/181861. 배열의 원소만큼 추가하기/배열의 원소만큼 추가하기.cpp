#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for (auto el : arr) {
        for (int index = 0; index < el; ++index) {
            answer.push_back(el);
        }
    }
    return answer;
}