#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer;
    int index = (2* k - 1) % numbers.size() - 1;
    if (index < 0) {
        index = numbers.size() - 1;
    }
    answer = numbers[index];
    return answer;
}