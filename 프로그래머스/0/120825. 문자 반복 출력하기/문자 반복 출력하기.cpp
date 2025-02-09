#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (auto target : my_string) {
        for (size_t number = 0; number < n; ++number) {
            answer += target;
        }
    }
    return answer;
}