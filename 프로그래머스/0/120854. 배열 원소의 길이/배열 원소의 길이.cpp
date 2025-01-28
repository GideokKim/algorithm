#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    answer.resize(strlist.size(), 0);
    for (size_t index = 0; index < strlist.size(); ++index) {
        answer[index] = strlist[index].size();
    }
    return answer;
}