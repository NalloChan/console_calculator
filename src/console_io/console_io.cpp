
#include <console_io/console_io.hpp>
#include <iostream>
#include <string>
#include <string_view>

namespace console_io {
ConsoleIO::ConsoleIO() {}

ConsoleIO::~ConsoleIO() {}

auto ConsoleIO::output(std::string_view message) -> void {
  std::cout << message << std::endl;
}

auto ConsoleIO::input() -> std::string {
  std::string input{};
  // std::cin >> input; だと空白があった場合に以降を読み込まない
  std::getline(std::cin, input);
  return input;
}
}  // namespace console_io
