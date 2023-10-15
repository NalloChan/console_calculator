
#pragma once

#include "core/concepts.hpp"

namespace calculator {
template <concepts::arithmetic T>
class Arithmetic {
 private:
  using value_type = T;

 public:
  Arithmetic() = default;
  ~Arithmetic() = default;

  auto add(value_type lhs, value_type rhs) -> value_type { return lhs + rhs; }

  auto sub(value_type lhs, value_type rhs) -> value_type { return lhs - rhs; }

  auto mul(value_type lhs, value_type rhs) -> value_type { return lhs * rhs; }

  auto div(value_type lhs, value_type rhs) -> value_type { return lhs / rhs; }
};
}  // namespace calculator
