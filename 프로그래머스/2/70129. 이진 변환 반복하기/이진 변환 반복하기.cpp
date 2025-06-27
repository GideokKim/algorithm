#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2, 0);
    while (1 != s.size()) {
        ++answer[0];
        auto zero_count = std::count(s.begin(), s.end(), '0');
        answer[1] += static_cast<int>(zero_count);
        auto num = s.size() - zero_count;
        std::string num_str;
        while (num) {
            if (num % 2) {
                num_str = "1" + num_str;
            } else {
                num_str = "0" + num_str;
            }
            num >>= 1;
        }
        s = num_str;
    }
    return answer;
}