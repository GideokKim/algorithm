#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for (auto number : numbers) {
        answer = std::max(answer, number);
    }
    auto iter = std::find(numbers.begin(), numbers.end(), answer);
    *iter = 0;
    
    int second_largest = 0;
    for (auto number : numbers) {
        second_largest = std::max(second_largest, number);
    }
    answer *= second_largest;
    return answer;
}