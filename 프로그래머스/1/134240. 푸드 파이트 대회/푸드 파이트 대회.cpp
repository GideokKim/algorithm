#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    std::string left = "";
    std::string right = "";
    
    for (size_t i = 1; i < food.size(); ++i) {
        int num = food[i] / 2;
        for (size_t j = 0; j < num; ++j) {
            left += std::to_string(i);
            right = std::to_string(i) + right;
        }
    }
    
    answer = left + "0" + right;
    return answer;
}