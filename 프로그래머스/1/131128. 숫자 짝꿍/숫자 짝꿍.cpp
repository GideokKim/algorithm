#include <string>
#include <vector>
#include <map>
#include <iostream>

std::string solution(std::string X, std::string Y) {    
    std::string answer = "";
    std::map<char, int> number_x;
    std::map<char, int> number_y;
    
    for (size_t key = 0; key < 10; ++key) {
        number_x.insert( {'0' + key, 0});
        number_y.insert( {'0' + key, 0});
    }

    for (auto char_x : X) {
        ++number_x[char_x];
    }
    
    
    for (auto char_y : Y) {
        ++number_y[char_y];
    }
    
    for (int key = 9; key >= 0; --key) {
        char target = '0' + key;
        int common_count = number_x[target] < number_y[target] ? number_x[target] : number_y[target];
        std::string number;
        if (answer.size() == 0 && target == '0' && common_count) {
            number.append(1, target);
        } else {
            number.append(common_count, target);
        }
        answer.append(number);
    }
    
    if (answer.size() == 0) {
        answer.append("-1");
    }
    
    return answer;
}