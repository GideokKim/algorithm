#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    std::vector<std::string> num_word = {"zero", "one", "two", 
                                         "three", "four", "five", 
                                         "six", "seven", "eight", "nine"};

    for (size_t i = 0; i < num_word.size(); ++i) {
        auto& target = num_word[i];
        while (s.find(target) != std::string::npos) {
            s.replace(s.find(target), target.size(), std::to_string(i));
        }
    }
    answer = std::stoi(s);
    return answer;
}