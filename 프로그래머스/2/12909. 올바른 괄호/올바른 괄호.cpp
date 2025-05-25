#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    std::stack<char> check_stack;
    
    for (auto target : s) {
        if (target == '(') {
            check_stack.push(target);
        } else {
            if (check_stack.empty()) {
                answer = false;
                break;
            } else {
                check_stack.pop();
            }
        }
    }

    if (!check_stack.empty()) {
        answer = false;
    }

    return answer;
}