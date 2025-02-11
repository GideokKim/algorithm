#include <string>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = my_string;
    std::reverse(answer.begin(), answer.end());
    return answer;
}