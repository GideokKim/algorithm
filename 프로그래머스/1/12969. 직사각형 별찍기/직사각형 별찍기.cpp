#include <iostream>
#include <string>

using namespace std;

int main(void) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    size_t n, m;
    cin >> n >> m;
    for (size_t i = 0; i < m; ++i) {
        std::cout << std::string(n, '*') << "\n";
    }
    return 0;
}