#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (auto target : numbers) {
        answer.push_back(target * 2);
    }
    return answer;
}