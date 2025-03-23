#include <string>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for (auto& target : pat) {
        if (target == 'A') {
            target = 'B';
        } else {
            target = 'A';
        }
    }
    if (myString.find(pat) != std::string::npos) {
        answer = 1;
    }
    return answer;
}