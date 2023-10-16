
#pragma once

#include <memory>
#include <string>

#include "calculator/arithmetic.hpp"
#include "console_io/console_io.hpp"
namespace calculator {

/// @brief 計算機の管理クラス
class Calculator {
 private:
  using value_type = double;

  console_io::ConsoleIO&& console_io;
  Arithmetic<value_type>&& arithmetic;
  std::string input_string{};
  std::string calculation_result{};

 public:
  Calculator(console_io::ConsoleIO&& console_io,
             Arithmetic<value_type>&& arithmetic);

  ~Calculator();

  auto run() -> void;

  auto announce() -> void;
  auto input() -> void;
  auto output() -> void;

  /// @brief 入力された文字列を処理する
  /// @return true: 継続, false: 終了
  auto process() -> bool;

  auto calculate() -> void;
};
}  // namespace calculator
