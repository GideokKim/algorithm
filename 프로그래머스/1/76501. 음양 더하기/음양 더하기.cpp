#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    for (size_t index = 0; index < absolutes.size(); ++index) {
        if (signs[index]) {
            answer += absolutes[index];
        } else {
            answer -= absolutes[index];
        }
    }
    return answer;
}