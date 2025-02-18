#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for (auto target : s1) {
        for (auto element : s2) {
            if (target == element) {
                ++answer;
            }
        }
    }
    return answer;
}