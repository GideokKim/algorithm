#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    std::sort(array.begin(), array.end());
    answer = array[0];
    for (auto target : array) {
        if (target <= n) {
            answer = target;
        } else {
            if (n - answer > target - n) {
                answer = target;
            }
            break;
        }
    }
    return answer;
}