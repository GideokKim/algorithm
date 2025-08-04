#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "No";
    size_t index_cards1 = 0;
    size_t index_cards2 = 0;
    for (auto& target : goal) {
        if (cards1[index_cards1] == target) {
            ++index_cards1;
        } else if (cards2[index_cards2] == target) {
            ++index_cards2;
        } else {
            return answer;
        }
    }
    answer = "Yes";
    return answer;
}