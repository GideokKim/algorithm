#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long num2 = static_cast<long long>(num);
    int answer = 0;
    while (num2 != 1 && answer < 500) {
        if (num2 % 2) {
            num2 = num2 * 3 + 1;
        } else {
            num2 /= 2;
        }
        ++answer;
    }
    
    if (answer == 500 && num2 != 1) {
        answer = -1;
    }
    return answer;
}