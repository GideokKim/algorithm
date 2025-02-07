#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for (auto target : my_string) {
        std::string str(1, target);
        if (str == letter) {
            continue;
        }
        answer += target;
    }
    return answer;
}