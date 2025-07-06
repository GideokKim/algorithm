#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int start = 1; start <= n; ++start) {
        int sum = 0;
        int num = start;
        while (sum < n) {
            sum += num;
            ++num;
        }
        if (sum == n) {
            ++answer;
        }
    }
    return answer;
}