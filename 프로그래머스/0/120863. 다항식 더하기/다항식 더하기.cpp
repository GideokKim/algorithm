#include <string>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    std::stringstream ss(polynomial);
    
    std::string target;
    long long x_num = 0;
    long long c_num = 0;
    
    while(ss >> target) {
        if (target == "+") {
            continue;
        } else if (target.back() == 'x') {
            target.pop_back();
            if (target.empty()) {
                ++x_num;
            } else {
                x_num += std::stoll(target);
            }
        } else {
            c_num += std::stoll(target);
        }
    }
    if (x_num != 0) {
        answer = "x";
    }
    if (x_num > 1) {
        answer = std::to_string(x_num) + answer;
    }
    
    if (!answer.empty() && c_num) {
        answer += " + ";
    }
    if (c_num) {
        answer += std::to_string(c_num);
    }
    return answer;
}