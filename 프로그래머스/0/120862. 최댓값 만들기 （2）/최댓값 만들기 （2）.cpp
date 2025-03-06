#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    std::sort(numbers.begin(), numbers.end());
    size_t num_size = numbers.size();
    
    int num1 = numbers[0] * numbers[1];
    int num2 = numbers[num_size - 2] * numbers[num_size - 1];
    answer = num1 > num2? num1 : num2;
    return answer;
}