#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (std::find(answer.begin(), answer.end(), numbers[i] + numbers[j]) == answer.end()) {
                answer.push_back(numbers[i] + numbers[j]);
            }
        }
    }
    std::sort(answer.begin(), answer.end());
    
    return answer;
}