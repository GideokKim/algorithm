#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    
    std::stack<char> char_stack;

    for (auto target : s) {
        if (char_stack.empty()) {
            char_stack.push(target);
        } else {
            if (char_stack.top() == target) {
                char_stack.pop();
            } else {
                char_stack.push(target);
            }
        }
    }
    
    if (char_stack.empty()) {
        answer = 1;
    }

    return answer;
}