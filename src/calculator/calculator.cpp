
#include "calculator.hpp"

#include <iostream>

#include "../calculator/calculator_message.hpp"

namespace calculator {
Calculator::Calculator(std::shared_ptr<console_io::ConsoleIO> console_io)
    : console_io(console_io) {
  console_io->output(message::announce);
}

Calculator::~Calculator() {}

auto Calculator::run() -> void {
  auto input = console_io->input();
  console_io->output(input);
}
}  // namespace calculator
