#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    std::sort(num_list.begin(), num_list.end());
    vector<int> answer(num_list.begin(), num_list.begin() + 5);
    
    return answer;
}