#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    char target = '0' + k;
    
    for (int num = i; num <= j; ++num) {
        std::string num_str = std::to_string(num);
        for (auto sliced_num : num_str) {
            if (sliced_num == target) {
                answer++;
            }
        }
    }
    return answer;
}