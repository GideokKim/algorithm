#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (a == b) {
        answer = a;
        return answer;
    }
    
    if (a > b) {
        auto temp = a;
        a = b;
        b = temp;
    }
    for (long long start = a; start <= b; ++start) {
        answer += start;
    }
    
    return answer;
}