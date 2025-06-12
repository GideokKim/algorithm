#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer;
    std::vector<int> counts(1000, 0);
    
    for (auto target : array) {
        ++counts[target];
    }
    
    answer = 0;
    int max_value = counts[0];
    
    for (int i = 1; i < counts.size(); ++i) {
        if (counts[i] > max_value) {
            answer = i;
            max_value = counts[i];
        } else if (counts[i] != 0 && counts[i] == max_value) {
            answer = -1;
        }
    }
    
    return answer;
}