#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    std::string n_str = std::to_string(n);
    std::vector<char> n_char;
    n_char.resize(n_str.size());
    for (size_t index = 0; index < n_str.size(); ++index) {
        n_char[index] = n_str[index];
    }
    std::sort(n_char.rbegin(), n_char.rend());
    
    for (size_t index = 0; index < n_str.size(); ++index) {
        n_str[index] = n_char[index];
    }
    
    answer = std::stoll(n_str);
    return answer;
}