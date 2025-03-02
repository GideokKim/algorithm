#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    size_t p_count = std::count(s.begin(), s.end(), 'p');
    p_count += std::count(s.begin(), s.end(), 'P');
    
    size_t y_count = std::count(s.begin(), s.end(), 'y');
    y_count += std::count(s.begin(), s.end(), 'Y');
    
    if (p_count != y_count) {
        answer = false;
    }

    return answer;
}