#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = s;
    std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    if ('a' <= answer[0] && 'z' >= answer[0]) {
        answer[0] += 'A' - 'a';
    }
    for (size_t i = 1; i < answer.size(); ++i) {
        if (answer[i] == ' ') {
            if ('a' <= answer[i + 1] && 'z' >= answer[i + 1]) {
                answer[i + 1] += 'A' - 'a';
            }
        }
    }
    return answer;
}