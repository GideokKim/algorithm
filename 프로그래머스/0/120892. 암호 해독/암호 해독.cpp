#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    for (size_t index = code - 1; index < cipher.size(); index += code) {
        answer += cipher[index];
    }
    return answer;
}