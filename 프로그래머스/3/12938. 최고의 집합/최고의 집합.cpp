#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    if (s < n) {
        answer.push_back(-1);
    } else {
        answer.resize(n, s/n);
        int remainder = s % n;
        if (remainder) {
            for (int index = n - remainder; index < n; ++index) {
                ++answer[index];
            }
        }
    }
    return answer;
}