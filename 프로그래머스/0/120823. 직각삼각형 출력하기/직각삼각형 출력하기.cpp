#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    std::string stars;
    stars.resize(n, '*');
    for (size_t num = 1; num <= n; ++num) {
        std::cout << stars.substr(0, num) << std::endl;   
    }
    return 0;
}