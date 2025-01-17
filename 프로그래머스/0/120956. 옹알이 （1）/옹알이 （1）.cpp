#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    std::vector<std::string> words = {"ma", "aya", "ye", "woo"};
    std::string special_word = "maya";
    for (auto target : babbling) {
        std::vector<bool> exists = {false, false, false, false};
        for (size_t index = 0; index < words.size(); ++index) {
            if (target.find(special_word) != std::string::npos) {
                break;
            }
            if (target.find(words[index]) != std::string::npos) {
                exists[index] = true;
            }
        }
        
        for (size_t index = 0; index < exists.size(); ++index) {
            if (exists[index]) {
                auto word = words[index];
                target.replace(target.find(word), word.size(), "");                
            }
        }
        
        if (target == "") {
            ++answer;
        }
    }
    
    return answer;
}