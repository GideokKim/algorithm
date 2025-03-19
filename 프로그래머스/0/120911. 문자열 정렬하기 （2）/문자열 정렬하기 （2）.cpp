#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string solution(string my_string) {
    for (size_t index = 0; index < my_string.size(); ++index) {
        my_string[index] = std::tolower(my_string[index]);
    }
    string answer = my_string;
    std::sort(answer.begin(), answer.end());
    return answer;
}