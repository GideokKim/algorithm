#define BOJ_SUBMIT
#ifndef BOJ_15000_SRC_15740_A_PLUS_B_9_H_
#define BOJ_15000_SRC_15740_A_PLUS_B_9_H_

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class BigInt {
 public:
  // Initialize with unit number of 10^8
  BigInt() : unit_number(100000000), big_int_number() {}

  // Initialize BigInt from a string
  BigInt(const std::string& number) : unit_number(100000000) {
    SetBigIntNumber(number);
  }

  void SetBigIntSize(int size) { big_int_number.resize(size, 0); }

  void SetBigIntNumber(const std::string& big_int_number_string) {
    big_int_number.clear();
    for (int i = big_int_number_string.size(); i > 0; i -= 8) {
      int start = std::max(0, i - 8);
      big_int_number.push_back(
          std::stoi(big_int_number_string.substr(start, i - start)));
    }
  }

  BigInt operator+(const BigInt& other) const {
    BigInt result;
    result.big_int_number.resize(
        std::max(big_int_number.size(), other.big_int_number.size()) + 1);
    int carry = 0;

    for (size_t i = 0; i < result.big_int_number.size(); ++i) {
      int sum = carry;
      if (i < big_int_number.size()) sum += big_int_number[i];
      if (i < other.big_int_number.size()) sum += other.big_int_number[i];
      result.big_int_number[i] = sum % unit_number;
      carry = sum / unit_number;
    }

    // Remove unnecessary zeros from the result
    while (result.big_int_number.size() > 1 &&
           result.big_int_number.back() == 0) {
      result.big_int_number.pop_back();
    }

    return result;
  }

  BigInt operator*(const BigInt& other) const {
    BigInt result;
    result.big_int_number.resize(
        big_int_number.size() + other.big_int_number.size(), 0);

    for (size_t i = 0; i < big_int_number.size(); ++i) {
      long long carry = 0;
      for (size_t j = 0; j < other.big_int_number.size(); ++j) {
        long long product = static_cast<long long>(big_int_number[i]) *
                                other.big_int_number[j] +
                            result.big_int_number[i + j] + carry;
        result.big_int_number[i + j] = product % unit_number;
        carry = product / unit_number;
      }
      // Add carry to the next position
      if (carry > 0) {
        result.big_int_number[i + other.big_int_number.size()] += carry;
      }
    }

    // Remove unnecessary zeros from the result
    while (result.big_int_number.size() > 1 &&
           result.big_int_number.back() == 0) {
      result.big_int_number.pop_back();
    }

    return result;
  }

  // Output as a string
  std::string ToString() const {
    if (big_int_number.empty()) {
      return "0";
    }
    std::ostringstream oss;
    oss << big_int_number.back();  // Output the highest digit
    for (int i = big_int_number.size() - 2; i >= 0; --i) {
      oss << std::setw(8) << std::setfill('0')
          << big_int_number[i];  // Output the remaining digits
    }
    return oss.str();
  }

  // Equality operator
  bool operator==(const BigInt& other) const {
    return big_int_number == other.big_int_number;
  }

 private:
  std::vector<int> big_int_number;  // Each element represents a unit of 10^8
  int unit_number;                  // Unit number
};

class APlusB9 {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = BigInt(a) + BigInt(b); }

  void PrintResult() { std::cout << result.ToString(); }

 private:
  std::string a;
  std::string b;
  BigInt result;
};

#ifdef BOJ_SUBMIT
int main() {
  APlusB9 a_plus_b_9;
  a_plus_b_9.SetInputs();
  a_plus_b_9.Calculate();
  a_plus_b_9.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15740_A_PLUS_B_9_H_
