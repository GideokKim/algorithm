#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    size_t vector_size = numbers.size();
    answer.resize(vector_size);
    
    if (direction == "left") {
        for (size_t index = 1; index < vector_size; ++index) {
            answer[index - 1] = numbers[index];
        }
        answer[vector_size - 1] = numbers[0];
    } else {
        for (size_t index = 0; index < vector_size - 1; ++index) {
            answer[index + 1] = numbers[index];
        }
        answer[0] = numbers[vector_size - 1];
        
    }
    return answer;
}