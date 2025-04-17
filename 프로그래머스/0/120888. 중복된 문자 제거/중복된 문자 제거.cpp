#include <string>
#include <set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    std::set<char> char_set;
    for (auto target : my_string) {
        size_t previous = char_set.size();
        char_set.insert(target);
        if (previous != char_set.size()) {
            answer += target;
        }
    }
    return answer;
}