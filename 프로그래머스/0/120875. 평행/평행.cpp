#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    for (size_t i = 0; i < 4; ++i) {
        auto left = (dots[i][0] - dots[(i + 1) % 4][0]) * (dots[(i + 2) % 4][1] - dots[(i + 3) % 4][1]);
        auto right = (dots[i][1] - dots[(i + 1) % 4][1]) * (dots[(i + 2) % 4][0] - dots[(i + 3) % 4][0]);
        if (left == right) {
            answer = 1;
            break;
        }
    }
    return answer;
}