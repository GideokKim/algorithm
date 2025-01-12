#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    std::sort(score.begin(), score.end(), [](int a, int b){return a > b;});
    for (int min_score = m - 1; min_score < score.size(); min_score += m) {
        answer += score[min_score];
    }
    
    answer *= m;
    return answer;
}