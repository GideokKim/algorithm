#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (auto target : myString) {
        if ('a' <= target && target <= 'l') {
            answer += 'l';
        } else {
            answer += target;
        }
    }
    return answer;
}