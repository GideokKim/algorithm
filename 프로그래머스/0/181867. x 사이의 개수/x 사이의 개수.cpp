#include <string>
#include <vector>
#include <sstream>

std::vector<int> solution(std::string myString) {
    std::vector<int> answer;
    std::string target;
    std::istringstream ss(myString);
    while (getline(ss, target, 'x')) {
        answer.push_back(static_cast<int>(target.size()));
    }
    
    if (myString[myString.size() - 1] == 'x') {
        answer.push_back(0);
    }
    return answer;
}