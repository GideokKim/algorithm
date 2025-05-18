#include <string>
#include <algorithm>

using namespace std;

bool compare(char a, char b) {
    return a > b;
}

string solution(string s) {
    string answer = "";
    std::sort(s.begin(), s.end(), compare);
    answer = s;
    return answer;
}