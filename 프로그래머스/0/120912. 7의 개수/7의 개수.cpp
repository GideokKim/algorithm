#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for (auto target : array) {
        while (target) {
            int num = target % 10;
            if (num == 7) {
                ++answer;
            }
            target /= 10;
        }
    }
    return answer;
}