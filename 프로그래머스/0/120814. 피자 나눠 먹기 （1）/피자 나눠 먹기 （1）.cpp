#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n % 7;
    if (answer) {
        n -= answer;
        answer = 1;
    }
    answer += n / 7;
    return answer;
}