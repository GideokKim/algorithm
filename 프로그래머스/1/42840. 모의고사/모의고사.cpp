#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    std::vector<int> student_1 = {1, 2, 3, 4, 5};
    std::vector<int> student_2 = {2, 1, 2, 3, 2, 4, 2, 5};
    std::vector<int> student_3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int s1_answer = 0;
    int s2_answer = 0;
    int s3_answer = 0;
    
    for (size_t i = 0; i < answers.size(); ++i) {
        if (student_1[i % 5] == answers[i]) {
            ++s1_answer;
        }
        if (student_2[i % 8] == answers[i]) {
            ++s2_answer;
        }
        if (student_3[i % 10] == answers[i]) {
            ++s3_answer;
        }
    }
    int max_num = std::max(s1_answer, std::max(s2_answer, s3_answer));
    if (s1_answer == max_num) {
        answer.emplace_back(1);
    }
    if (s2_answer == max_num) {
        answer.emplace_back(2);
    }
    if (s3_answer == max_num) {
        answer.emplace_back(3);
    }
    return answer;
}