#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for (auto target : picture) {
        std::string line;
        for (auto character : target) {
            line.append(k, character);
        }
        for (int i = 0; i < k; ++i) {
            answer.emplace_back(line);
        }
    }
    return answer;
}