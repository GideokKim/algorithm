#include <string>
#include <bitset>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int num = std::stoi(bin1, nullptr, 2) + std::stoi(bin2, nullptr, 2);
    answer = std::bitset<13>(num).to_string();
    bool is_zero = true;
    for (size_t index = 0; index < answer.size(); ++index) {
        if (answer[index] == '1') {
            answer = answer.substr(index);
            is_zero = false;
            break;
        }
    }
    
    if (is_zero) {
        answer = "0";
    }
    
    return answer;
}