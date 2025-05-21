#include <string>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    std::stringstream ss(my_string);
    std::string str;
    bool is_plus = true;
    bool is_num = false;
    int num = 0;
    
    while (ss >> str) {
        if (str == "+") {
            is_plus = true;
            is_num = false;
        } else if (str == "-") {
            is_plus = false;
            is_num = false;
        } else {
            num = std::stoi(str);
            if (is_plus) {
                answer += num;
            } else {
                answer -= num;
            }
        }
    }
    return answer;
}