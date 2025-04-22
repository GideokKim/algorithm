#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    
    answer += std::to_string(std::find(seoul.begin(), seoul.end(), "Kim") - seoul.begin());
    
    answer += "에 있다";
    return answer;
}