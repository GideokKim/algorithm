#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    for (size_t index = 0; index < my_str.size(); index += n) {
        answer.push_back(my_str.substr(index, n));
    }
    return answer;
}