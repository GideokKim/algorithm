#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int g_n;

bool sort_method(int a, int b) {
    if (std::abs(a - g_n) == std::abs(b - g_n)) {
        return a > b;
    } else {
        return std::abs(a - g_n) < std::abs(b - g_n);
    }
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer = numlist;
    g_n = n;
    std::sort(answer.begin(), answer.end(), sort_method);
    return answer;
}