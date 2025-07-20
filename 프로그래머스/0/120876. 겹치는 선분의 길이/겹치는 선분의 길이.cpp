#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    std::sort(lines.begin(), lines.end());
    int start = lines[0][0];
    int end = lines[0][1];
    
    for (size_t i = 1; i < 3; ++i) {
        if (start > lines[i][0]) {
            int temp = start;
            start = lines[i][0];
            lines[i][0] = temp;
        }
        if (end > lines[i][1]) {
            int temp = end;
            end = lines[i][1];
            lines[i][1] = temp;
        }
        int length = end - lines[i][0];
        if (length < 0) {
            start = lines[i][0];
            end = lines[i][1];
            continue;
        }
        answer += length;
        start = end;
        end = lines[i][1];
        std::cout << answer << " " << start << " " << end << "\n";
    }
    return answer;
}