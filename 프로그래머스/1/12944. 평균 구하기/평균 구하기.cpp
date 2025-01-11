#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for (auto number : arr) {
        answer += number;
    }
    answer /= arr.size();
    return answer;
}