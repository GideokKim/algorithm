#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for (auto& problem : quiz) {
        std::stringstream ss(problem);
        std::string target;
        std::vector<std::string> inputs;
        while (ss >> target) {
            inputs.emplace_back(target);
        }
        if (inputs[1] == "+") {
            if (std::stoi(inputs[0]) + std::stoi(inputs[2]) == std::stoi(inputs[4])) {
                answer.emplace_back("O");
            } else {
                answer.emplace_back("X");
            }
        } else {
            if (std::stoi(inputs[0]) - std::stoi(inputs[2]) == std::stoi(inputs[4])) {
                answer.emplace_back("O");
            } else {
                answer.emplace_back("X");
            }
        }
    }
    return answer;
}