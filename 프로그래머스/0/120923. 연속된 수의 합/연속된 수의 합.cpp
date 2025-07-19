#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    answer.resize(num, -num);
    int sum = 0;
    for (int i = 0; i < answer.size(); ++i) {
        answer[i] += i;
        sum += answer[i];
    }
    
    for (int i = 0; i < answer.size(); ++i) {
        answer[i] += (total - sum) / num;
    }
    
    return answer;
}