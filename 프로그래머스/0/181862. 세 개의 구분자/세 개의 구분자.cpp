#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    for (auto& target : myStr) {
        if (target == 'a' || target == 'b' || target == 'c') {
            target = ' ';
        }
    }
    
    std::stringstream ss(myStr);
    std::string word;
    while(ss >> word) {
        answer.push_back(word);
    }
    if (answer.empty()) {
        answer.push_back("EMPTY");
    }
    return answer;
}