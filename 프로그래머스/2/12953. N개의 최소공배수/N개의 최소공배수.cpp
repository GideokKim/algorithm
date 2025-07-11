#include <numeric>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        answer = std::lcm(answer, arr[i]);
    }
    return answer;
}