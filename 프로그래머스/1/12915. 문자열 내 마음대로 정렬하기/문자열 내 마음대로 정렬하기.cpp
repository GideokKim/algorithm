#include <string>
#include <vector>
#include <algorithm>

using namespace std;
size_t global_n = 0;

bool compare(std::string& a, std::string& b) {
    if (a[global_n] == b[global_n]) {
        return a < b;
    }
    return a[global_n] < b[global_n];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    global_n = static_cast<size_t>(n);
    std::sort(strings.begin(), strings.end(), compare);
    return strings;
}