#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    for (int number = 1; number * number <= n; ++number) {
        if (number * number == n) {
            answer = 1;
        }
    }
    
    return answer;
}