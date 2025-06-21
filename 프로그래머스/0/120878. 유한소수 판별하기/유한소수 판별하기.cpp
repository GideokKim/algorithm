#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 1;

    while (b % 2 == 0 || b % 5 == 0) {
        if (b % 2 == 0) {
            b /= 2;
        }
        if (b % 5 == 0) {
            b /= 5;
        }
    }
    
    if (a % b) {
        answer = 2;
    }
    return answer;
}