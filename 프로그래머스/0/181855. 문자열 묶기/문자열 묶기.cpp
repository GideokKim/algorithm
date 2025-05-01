#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    std::vector<int> lengths;
    lengths.resize(31, 0);
    
    for (auto target : strArr) {
        lengths[target.size()]++;
    }
    
    for (int max_index = 1; max_index < lengths.size(); ++max_index) {
        if (answer <= lengths[max_index]) {
            answer = lengths[max_index];
        }
    }
    return answer;
}