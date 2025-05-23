#include <numeric>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    if (arr1.size() == arr2.size()) {
        int arr1_sum = std::accumulate(arr1.begin(), arr1.end(), 0);
        int arr2_sum = std::accumulate(arr2.begin(), arr2.end(), 0);
        if (arr1_sum > arr2_sum) {
            answer = 1;
        } else if (arr1_sum < arr2_sum) {
            answer = -1;
        }
    }
    
    if (arr1.size() > arr2.size()) {
        answer = 1;
    } else if (arr1.size() < arr2.size()) {
        answer = -1;
    }
    return answer;
}