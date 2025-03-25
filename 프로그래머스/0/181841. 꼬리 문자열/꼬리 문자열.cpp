#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for (auto target : str_list) {
        if (target.find(ex) != std::string::npos) {
            continue;
        }
        answer += target;
    }
    return answer;
}