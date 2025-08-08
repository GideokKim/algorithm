#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    std::set<std::string> previous;
    std::string previous_word;
    bool is_failed = false;
    int count = 0;
    
    previous.insert(words[0]);
    for (int i = 1; i < words.size(); ++i) {
        size_t past_size = previous.size();
        previous.insert(words[i]);
        count = i;
        if (past_size == previous.size()) {
            is_failed = true;
            break;
        }
        if (words[i - 1].back() != words[i][0]) {
            is_failed = true;
            break;
        }
    }
    ++count;
    std::cout << count;
    
    if (count % n) {
        answer.emplace_back(count % n);
        answer.emplace_back(count / n + 1);
    } else {
        answer.emplace_back(n);
        answer.emplace_back(count / n);
    }
    
    if (!is_failed) {
        answer[0] = 0;
        answer[1] = 0;
    }

    return answer;
}