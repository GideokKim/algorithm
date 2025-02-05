#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (auto target : my_string) {
        if (target == 'a' || target == 'e' ||
           target == 'i' ||  target == 'o' ||
           target == 'u') {
            continue;
        }
        answer += target;
    }
    return answer;
}