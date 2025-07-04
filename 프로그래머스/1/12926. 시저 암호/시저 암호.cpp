#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (auto target : s) {
        if (target == ' ') {
            answer += target;
        } else if ('a' <= target && target <= 'z') {
            auto shift = target + n;
            answer += 'z' < shift? shift - 26 : shift;
        } else {
            auto shift = target + n;
            answer += 'Z' < shift? shift - 26 : shift;
        }
    }
    return answer;
}