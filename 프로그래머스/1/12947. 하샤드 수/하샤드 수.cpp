#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    std::string x_str = std::to_string(x);
    int sum = 0;
    for (auto target : x_str) {
        sum += static_cast<int>(target - '0');
    }
    if (x % sum != 0) {
        answer = false;
    }
    return answer;
}