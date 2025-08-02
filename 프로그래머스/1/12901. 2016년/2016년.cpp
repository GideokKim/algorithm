#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    std::vector<int> months = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::vector<std::string> week = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    
    int days = b + 4;
    for (size_t i = 0; i < a - 1; ++i) {
        days += months[i];
    }
    days %= 7;
    answer = week[days];
    return answer;
}