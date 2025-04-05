#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    std::string num_str = std::to_string(num);
    std::string k_str = std::to_string(k);
    
    for (size_t index = 0; index < num_str.size(); ++index) {
        if (num_str[index] == k_str[0]) {
            answer = static_cast<int>(index) + 1;
            break;
        }
    }
    return answer;
}