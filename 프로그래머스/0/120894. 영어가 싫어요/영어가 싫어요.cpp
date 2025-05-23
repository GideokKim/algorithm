#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    std::string answer_str;
    while (!numbers.empty()) {
        auto target = numbers[0];
        if (target == 'z') {
            answer_str += "0";
            numbers = numbers.substr(4);
        } else if (target == 'o') {
            answer_str += "1";
            numbers = numbers.substr(3);
        } else if (target == 't') {
            if (numbers[1] == 'w') {
                answer_str += "2";
                numbers = numbers.substr(3);
            } else {
                answer_str += "3";
                numbers = numbers.substr(5);
            }
        } else if (target == 'f') {
            if (numbers[1] == 'o') {
                answer_str += "4";
                numbers = numbers.substr(4);
            } else {
                answer_str += "5";
                numbers = numbers.substr(4);
            }
        } else if (target == 's') {
            if (numbers[1] == 'i') {
                answer_str += "6";
                numbers = numbers.substr(3);
            } else {
                answer_str += "7";
                numbers = numbers.substr(5);
            }
        } else if (target == 'e') {
            answer_str += "8";
            numbers = numbers.substr(5);
        } else if (target == 'n') {
            answer_str += "9";
            numbers = numbers.substr(4);
        }
    }
    answer = std::stoll(answer_str);
    return answer;
}