#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = -1;
    std::sort(sides.begin(), sides.end());
    for (int start = sides[1] - sides[0]; start < sides[0] + sides[1]; ++start) {
        ++answer;
    }
    return answer;
}