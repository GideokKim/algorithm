#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int num = 1; num <= n; ++num) {
        if (num % 2 == 1) {
            answer.push_back(num);
        }
    }
    return answer;
}