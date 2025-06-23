#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (auto command : commands) {
        std::vector<int> target(command[1] - command[0] + 1, 0);
        std::copy(array.begin() + command[0] - 1, array.begin() + command[1], target.begin());

        std::sort(target.begin(), target.end());
        answer.emplace_back(target[command[2] - 1]);
    }
    return answer;
}