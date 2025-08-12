#define BOJ_SUBMIT
#ifndef BOJ_15000_SRC_15650_N_AND_M_2_H_
#define BOJ_15000_SRC_15650_N_AND_M_2_H_

#include <iostream>
#include <vector>

class NAndM2 {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    visited.resize(n, false);
    arr.resize(m, 0);
  }

  void Calculate() {}

  void PrintResult() { dfs(0); }

 private:
  size_t n, m;
  std::vector<size_t> arr;
  std::vector<bool> visited;

  void dfs(size_t depth) {
    if (depth == m) {
      for (auto target : arr) {
        std::cout << target << " ";
      }
      std::cout << "\n";
      return;
    }

    for (size_t i = 0; i < n; ++i) {
      if (!visited[i]) {
        if (depth > 0 && arr[depth - 1] > i) {
          continue;
        }
        visited[i] = true;
        arr[depth] = i + 1;
        dfs(depth + 1);
        visited[i] = false;
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NAndM2 n_and_m_2;
  n_and_m_2.SetInputs();
  n_and_m_2.Calculate();
  n_and_m_2.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15650_N_AND_M_2_H_
