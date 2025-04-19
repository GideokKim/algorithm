#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    auto first_day = date1[0] * 10000 + date1[1] * 100 + date1[2];
    auto second_day = date2[0] * 10000 + date2[1] * 100 + date2[2];
    if (first_day < second_day) {
        answer = 1;
    }
    return answer;
}