#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    istringstream ss(my_string);
    string target;

    while (getline(ss, target, ' ')) {
        answer.push_back(target);
    }

    return answer;
}