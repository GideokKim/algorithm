#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = n / slice;
    answer += n % slice ? 1 : 0;
    return answer;
}