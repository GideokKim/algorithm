#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    
    if(std::find(db.begin(), db.end(), id_pw) != db.end()) {
        answer = "login";
    } else {
        for (auto target : db) {
            if (target[0] == id_pw[0]) {
                answer = "wrong pw";
                break;
            }
        }
    }
    return answer;
}