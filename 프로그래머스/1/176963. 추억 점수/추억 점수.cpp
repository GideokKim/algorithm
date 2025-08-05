#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for (auto& members : photo) {
        int count = 0;
        for (auto& member : members) {
            for (size_t i = 0; i < name.size(); ++i) {
                if (member == name[i]) {
                    count += yearning[i];
                }
            }
        }
        answer.emplace_back(count);
    }
    return answer;
}