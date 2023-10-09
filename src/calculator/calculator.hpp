
#pragma once

#include <console_io/console_io.hpp>
#include <memory>

namespace calculator {

/// @brief 計算機の管理クラス
class Calculator {
 private:
  std::shared_ptr<console_io::ConsoleIO> console_io{};

 public:
  explicit Calculator(std::shared_ptr<console_io::ConsoleIO> console_io);
  ~Calculator();

  auto run() -> void;
};
}  // namespace calculator
