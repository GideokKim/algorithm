#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    for (size_t index = 0; index < a.size(); ++index) {
        answer += a[index] * b[index];
    }
    return answer;
}