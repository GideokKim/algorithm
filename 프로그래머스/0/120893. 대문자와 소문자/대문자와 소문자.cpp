#include <cctype>
#include <vector>
#include <string>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (auto target : my_string) {
        if ('a' <= target && target <= 'z') {
            answer += std::toupper(target);
        } else {
            answer += std::tolower(target);
        }
    }
    return answer;
}