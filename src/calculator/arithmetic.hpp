
#pragma once

#include <functional>

#include "core/concepts.hpp"

namespace calculator {
template <concepts::arithmetic T>
class Arithmetic {
 private:
  using value_type = T;

 public:
  static constexpr char decimal_point = '.';
  static constexpr char equal = '=';
  static constexpr char plus = '+';
  static constexpr char minus = '-';
  static constexpr char multiply = '*';
  static constexpr char divide = '/';

 public:
  Arithmetic() = default;
  ~Arithmetic() = default;

  constexpr auto is_numeric(const char& c) -> bool {
    return c == decimal_point || (c >= '0' && c <= '9');
  }

  constexpr auto is_operator(const char& c) -> bool {
    return c == equal || c == plus || c == minus || c == multiply ||
           c == divide;
  }

  auto get_formula(const char& opr)
      -> std::function<value_type(value_type, value_type)> {
    switch (opr) {
      case equal:
        return get_answer;
      case plus:
        return add;
      case minus:
        return sub;
      case multiply:
        return mul;
      case divide:
        return div;
      default:
        return [](value_type, value_type) { return 0; };
    }
  }

  static constexpr auto get_answer(value_type lhs, value_type) -> bool {
    return lhs;
  }

  static constexpr auto add(value_type lhs, value_type rhs) -> value_type {
    return lhs + rhs;
  }

  static constexpr auto sub(value_type lhs, value_type rhs) -> value_type {
    return lhs - rhs;
  }

  static constexpr auto mul(value_type lhs, value_type rhs) -> value_type {
    return lhs * rhs;
  }

  static constexpr auto div(value_type lhs, value_type rhs) -> value_type {
    return lhs / rhs;
  }
};
}  // namespace calculator
