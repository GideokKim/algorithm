#define BOJ_SUBMIT
#ifndef BOJ_27000_SRC_27465_COMPOSITE_NUMBER_H_
#define BOJ_27000_SRC_27465_COMPOSITE_NUMBER_H_

#include <iostream>

class CompositeNumber {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    if (n == 1) {
      n = 2;
    }
    result = 2 * n;
  }

  void PrintResult() const { std::cout << result; }

 private:
  unsigned long long n;
  unsigned long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  CompositeNumber compositeNumber;
  compositeNumber.SetInputs();
  compositeNumber.Calculate();
  compositeNumber.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27465_COMPOSITE_NUMBER_H_
