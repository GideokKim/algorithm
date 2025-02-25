#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    std::sort(array.begin(), array.end());
    int answer = array[array.size() >> 1];
    return answer;
}