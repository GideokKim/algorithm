#include <string>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    std::stringstream ss(s);
    
    std::string target;
    int previous = 0;
    while (ss >> target) {
        if (target == "Z") {
            answer -= previous;
        } else {
            answer += std::stoi(target);
            previous = std::stoi(target);
        }
    }
    return answer;
}