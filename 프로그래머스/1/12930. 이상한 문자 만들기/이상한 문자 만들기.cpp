#include <string>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    bool is_blank = true;
    size_t index = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            answer.push_back(' ');
            is_blank = true;
        } else {
            if (is_blank) {
                index = 0;
                is_blank = false;
            }
            if (index % 2) {
                answer.push_back(s[i]);
            } else {
                answer.push_back(s[i] - 32);
            }
            ++index;
        }
    }
    
    return answer;
}