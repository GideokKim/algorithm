#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    answer.resize(n, std::vector<int>(n, 0));
    
    std::vector<int> dx = {0, 1, 0, -1};
    std::vector<int> dy = {1, 0, -1, 0};
    int index = 0;
    int x = 0;
    int y = 0;
    for (int i = 1; i <= n * n; ++i) {
        answer[x][y] = i;
        x += dx[index];
        y += dy[index];
        if (n <= x || n <= y || x < 0 || y < 0) {
            x -= dx[index];
            y -= dy[index];
            ++index;
            index %= 4;
            x += dx[index];
            y += dy[index];
        } else if (answer[x][y]) {
            x -= dx[index];
            y -= dy[index];
            ++index;
            index %= 4;
            x += dx[index];
            y += dy[index];
        }
    }
    return answer;
}