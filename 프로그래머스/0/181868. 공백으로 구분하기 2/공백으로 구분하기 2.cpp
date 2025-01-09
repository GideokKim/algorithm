#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> solution(std::string my_string) {
    std::vector<std::string> answer;
    
    std::istringstream ss(my_string);
    std::string target;

    while (getline(ss, target, ' ')) {
        if (target == "") {
            continue;
        }
        answer.push_back(target);
    }
    
    return answer;
}