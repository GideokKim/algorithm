#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    std::vector<int> dx = {-1, -1, -1, 0, 0, 1, 1, 1};
    std::vector<int> dy = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[0].size(); ++j) {
            if (board[i][j] == 1) {
                for (size_t k = 0; k < 8; ++k) {
                    auto x = i + dx[k];
                    auto y = j + dy[k];
                    if (x < 0 || y < 0 || board.size() <= x || board[0].size() <= y) {
                        continue;
                    }
                    
                    if (board[x][y] == 1) {
                        continue;
                    }
                    
                    board[x][y] = -1;
                }
            }
        }
    }
    
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[0].size(); ++j) {
            if (board[i][j]) {
                continue;
            }
            ++answer;
        }
    }
    return answer;
}