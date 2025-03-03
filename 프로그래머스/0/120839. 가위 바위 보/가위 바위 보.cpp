#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for (auto target : rsp) {
        if (target == '2') {
            answer += '0';
        } else if (target == '0') {
            answer += '5';
        } else {
            answer += '2';
        }
    }
    return answer;
}