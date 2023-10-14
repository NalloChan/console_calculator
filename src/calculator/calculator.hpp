
#pragma once

#include <memory>

#include "console_io/console_io.hpp"

namespace calculator {

/// @brief 計算機の管理クラス
class Calculator {
 private:
  std::shared_ptr<console_io::ConsoleIO> console_io{};
  std::string input_string{};
  std::string calculation_result{};

 public:
  explicit Calculator(std::shared_ptr<console_io::ConsoleIO> console_io);
  ~Calculator();

  auto run() -> void;

  auto announce() -> void;
  auto input() -> void;
  auto output() -> void;

  /// @brief 入力された文字列を処理する
  /// @return true: 継続, false: 終了
  auto process() -> bool;
};
}  // namespace calculator
