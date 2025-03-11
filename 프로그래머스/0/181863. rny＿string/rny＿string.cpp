#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    for (auto target : rny_string) {
        if (target == 'm') {
            answer += "rn";
        } else {
            answer += target;
        }
    }
    return answer;
}