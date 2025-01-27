#include <string>
#include <sstream>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    std::istringstream ss(binomial);
    std::string subs1;
    std::vector<std::string> v;

    while(getline(ss, subs1, ' ')){
        v.push_back(subs1);
    }
    
    answer = std::stoi(v[0]);
    int right = std::stoi(v[2]);
    if (v[1] == "+") {
        answer += right;
    } else if (v[1] == "-") {
        answer -= right;
    } else {
        answer *= right;
    }
    return answer;
}