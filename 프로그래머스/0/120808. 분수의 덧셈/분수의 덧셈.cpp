#include <numeric>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    answer.emplace_back(numer1 * denom2 + numer2 * denom1);
    answer.emplace_back(denom1 * denom2);
    
    int gcd_num = std::gcd(answer[0], answer[1]);
    answer[0] /= gcd_num;
    answer[1] /= gcd_num;
    return answer;
}