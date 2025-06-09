#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    board[0] /= 2;
    board[1] /= 2;
    
    for (auto& target : keyinput) {
        if (target == "left") {
            if (answer[0] == -board[0]) {
                continue;
            }
            answer[0]--;
        } else if (target == "right") {
            if (answer[0] == board[0]) {
                continue;
            }
            answer[0]++;
        } else if (target == "up") {
            if (answer[1] == board[1]) {
                continue;
            }
            answer[1]++;
        } else if (target == "down") {
            if (answer[1] == -board[1]) {
                continue;
            }
            answer[1]--;
        }
    }
    return answer;
}