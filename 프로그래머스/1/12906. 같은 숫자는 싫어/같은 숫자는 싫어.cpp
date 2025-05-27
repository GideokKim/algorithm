#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    
    for (auto target : arr) {
        if (answer.back() == target) {
            continue;
        }
        
        answer.push_back(target);
    }

    return answer;
}