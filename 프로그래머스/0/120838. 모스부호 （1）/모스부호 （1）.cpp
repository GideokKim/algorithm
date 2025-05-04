#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string letter) {
    string answer = "";
    std::vector<std::string> mors = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    std::stringstream ss(letter);
    
    std::string target;
    while (ss >> target) {
        for (size_t index = 0; index < mors.size(); ++index) {
            if (mors[index] == target) {
                answer += 'a' + index;
                break;
            }
        }
    }
    return answer;
}