#include <string>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    std::string n_str;
    while(n) {
        n_str += std::to_string(n % 3);
        n /= 3;
    }
    answer = std::stoi(n_str, nullptr, 3);
    
    return answer;
}