#include <algorithm>
#include <iostream>
#include <vector>

size_t r, c;
std::vector<std::string> map;
size_t result = 0;
const int dx[4] = {-1, 0, 0, 1};
const int dy[4] = {0, -1, 1, 0};

inline void dfs(int i, int j, int visited, size_t depth) {
    result = std::max(result, depth);
    if (result == 26) {
      return;
    }

    for (size_t index = 0; index < 4; ++index) {
      int nx = i + dx[index];
      int ny = j + dy[index];
      if (nx < 0 || ny < 0 || nx >= r || ny >= c) {
        continue;
      }
      int next_visited = visited | (1 << (map[nx][ny] - 'A'));
      if (next_visited != visited) {
        dfs(nx, ny, next_visited, depth + 1);
      }
    }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  std::cin >> r >> c;
  map.resize(r);

  for (size_t i = 0; i < r; ++i) {
    std::cin >> map[i];
  }

  dfs(0, 0, 1 << (map[0][0] - 'A'), 1);
  std::cout << result;

  return 0;
}