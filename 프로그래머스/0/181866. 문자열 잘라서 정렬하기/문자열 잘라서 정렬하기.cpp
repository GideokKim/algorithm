#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    
    std::string word;
    for (auto character : myString) {
        if (character != 'x') {
            word += character;
        } else {
            if (word != "") {
                answer.push_back(word);
                word = "";
            }
            
        }
    }
    if (word != "") {
        answer.push_back(word);
    }
    
    std::sort(answer.begin(), answer.end());
    return answer;
}