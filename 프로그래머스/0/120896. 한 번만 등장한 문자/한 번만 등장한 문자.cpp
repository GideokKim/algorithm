#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    std::vector<int> alphabet_count(26, 0);
    for (auto target : s) {
        alphabet_count[target - 'a']++;
    }
    for (size_t index = 0; index < alphabet_count.size(); ++index) {
        if (alphabet_count[index] == 1) {
            answer += ('a' + index);
        }
    }
    return answer;
}