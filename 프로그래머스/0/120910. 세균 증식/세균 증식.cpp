#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = 1;
    for (size_t i = 0; i < t; ++i) {
        answer *= 2;
    }
    answer *= n;
    return answer;
}