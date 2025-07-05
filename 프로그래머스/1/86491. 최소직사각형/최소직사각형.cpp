#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w = 0;
    int h = 0;
    
    for (auto& target : sizes) {
        std::sort(target.begin(), target.end());
        w = target[0] > w ? target[0] : w;
        h = target[1] > h ? target[1] : h;
    }
    answer = w * h;
    return answer;
}