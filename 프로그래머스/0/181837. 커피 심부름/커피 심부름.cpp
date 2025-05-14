#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for (auto& target : order) {
        if (target[0] == 'i' 
            || target[0] == 'h') {
            target = target.substr(3);
        } else if (target[target.size() - 2] == 'c'
            || target[target.size() - 2] == 'o') {
            target = target.substr(0, target.size() - 3);
        } else if (target == "anything") {
            target = "americano";
        }
        if (target == "americano") {
            answer += 4500;
        } else {
            answer += 5000;
        }
    }
    return answer;
}