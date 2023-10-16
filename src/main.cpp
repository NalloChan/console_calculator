
#include <string_view>

#include "calculator/calculator.hpp"
#include "console_io/console_io.hpp"

int main() {
  auto console = console_io::ConsoleIO();
  auto arithmetic = calculator::Arithmetic<double>();

  auto calculator =
      calculator::Calculator(std::move(console), std::move(arithmetic));
  calculator.run();

  return 0;
}
