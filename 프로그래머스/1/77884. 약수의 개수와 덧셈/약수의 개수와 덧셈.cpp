#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for (int num = left; num <= right; ++num) {
        int count = 0;
        for (int divisor = 1; divisor <= num; ++divisor) {
            if (num % divisor == 0) {
                ++count;
            }
        }
        answer += count % 2 ? -num : num;
    }
    return answer;
}