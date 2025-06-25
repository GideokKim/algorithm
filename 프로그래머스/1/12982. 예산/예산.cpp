#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    std::sort(d.begin(), d.end());
    for (auto target : d) {
        if (budget - target >= 0) {
            ++answer;
            budget -= target;
        }
    }
    return answer;
}