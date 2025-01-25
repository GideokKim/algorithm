#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for (auto friend_height : array) {
        if (friend_height > height) {
            ++answer;
        }
    }
    return answer;
}