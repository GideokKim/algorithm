#include <string>
#include <bitset>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = n + 1;
    std::bitset<30> bitset_n(n);
    std::string n_str = bitset_n.to_string();
    int n_count = std::count(n_str.begin(), n_str.end(), '1');
    
    std::bitset<30> bitset_answer(answer);
    std::string answer_str = bitset_answer.to_string();
    int answer_count = std::count(answer_str.begin(), answer_str.end(), '1');
    while (n_count != answer_count) {
        ++answer;
        bitset_answer = std::bitset<30>(answer);
        answer_str = bitset_answer.to_string();
        answer_count = std::count(answer_str.begin(), answer_str.end(), '1');
    }
    return answer;
}