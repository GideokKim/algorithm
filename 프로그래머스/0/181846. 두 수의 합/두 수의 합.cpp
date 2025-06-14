#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    if (a.size() > b.size()) {
        answer = a;
        a = b;
        b = answer;
        answer.clear();
    }
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    
    auto a_value = a.begin();
    int remainder = 0;
    for (auto b_value = b.begin(); b_value != b.end(); ++b_value) {
        remainder += static_cast<int>(*b_value - '0');
        if (a_value != a.end()) {
            remainder += static_cast<int>(*a_value - '0');
            ++a_value;
        }
        // std::cout << remainder << "\n";
        answer += std::to_string(remainder % 10);
        remainder /= 10;
    }
    
    if (remainder) {
        answer += std::to_string(remainder % 10);
    }
    std::reverse(answer.begin(), answer.end());
    return answer;
}