#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    std::string num_str;
    std::vector<long long> numbers;
    std::stringstream ss(s);
    while (ss >> num_str) {
        numbers.push_back(std::stoll(num_str));
    }
    std::sort(numbers.begin(), numbers.end());
    answer = std::to_string(numbers[0]);
    answer += " ";
    answer += std::to_string(*numbers.rbegin());
    return answer;
}