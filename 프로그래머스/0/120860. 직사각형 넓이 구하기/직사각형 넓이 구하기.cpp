#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

bool compare(const vector<int>& a, const vector<int>& b) {
    if (a[0] > b[0]) {
        return true;
    } else if (a[0] < b[0]) {
        return false;
    } else {
        if (a[1] > b[1]) {
            return true;
        } else {
            return false;
        }
    }
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    std::sort(dots.begin(), dots.end(), compare);
    answer = (dots[0][1] - dots[1][1]) * (dots[1][0] - dots[2][0]);
    for (auto target : dots) {
        for (auto ele : target) {
            std::cout << ele << " ";
        }
        std::cout << std::endl;
    }
    return answer;
}