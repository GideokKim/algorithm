#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    answer.resize(s.size(), -1);
    
    for (int i = 1; i < s.size(); ++i) {
        int count = 0;
        for (int j = i - 1; j >= 0; --j) {
            ++count;
            if (s[i] == s[j]) {
                answer[i] = count;
                break;
            }
        }
    }
    return answer;
}