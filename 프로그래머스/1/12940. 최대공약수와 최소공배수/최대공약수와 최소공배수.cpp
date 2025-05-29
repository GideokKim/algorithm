#include <numeric>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(std::gcd(n, m));
    answer.push_back(std::lcm(n, m));
    return answer;
}