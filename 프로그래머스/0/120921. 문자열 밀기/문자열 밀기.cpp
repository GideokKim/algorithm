#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string A, string B) {
    int count = 0;
    if (A.compare(B) == 0) {
        return count;
    }
    std::string original_a = A;
    
    original_a = original_a.back() + original_a.substr(0, original_a.size() - 1);
    ++count;
    
    while (original_a.compare(A)) {
        if (original_a == B) {
            return count;
        } else {
            original_a = original_a.back() + original_a.substr(0, original_a.size() - 1);
            ++count;
        }
    }
    
    return -1;
}