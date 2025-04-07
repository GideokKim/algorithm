#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    std::string age_str = std::to_string(age);
    for (auto target : age_str) {
        answer += static_cast<char>('a' + target - '0');
    }
    return answer;
}