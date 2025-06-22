#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int f_n_2 = 0;
    int f_n_1 = 1;
    int answer = 0;
    
    for (int i = 2; i <= n; ++i) {
        answer = (f_n_2 + f_n_1) % 1234567;
        f_n_2 = f_n_1 % 1234567;
        f_n_1 = answer % 1234567;
    }
    return answer;
}