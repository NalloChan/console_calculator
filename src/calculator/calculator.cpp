
#include "calculator/calculator.hpp"

#include <iostream>

#include "calculator/calculator_define.hpp"
#include "calculator/calculator_message.hpp"

namespace calculator {
Calculator::Calculator(std::shared_ptr<console_io::ConsoleIO> console_io)
    : console_io(console_io) {
  console_io->output(message::how_to_exit);
}

Calculator::~Calculator() {}

auto Calculator::run() -> void {
  while (true) {
    announce();
    input();
    if (!process()) {
      return;
    }
    output();
  }
}

auto Calculator::announce() -> void { console_io->output(message::announce); }

auto Calculator::input() -> void { input_string = console_io->input(); }

auto Calculator::output() -> void {
  console_io->output(calculation_result);
  console_io->new_line();
}

auto Calculator::process() -> bool {
  if (input_string == define::exit) {
    return false;
  }

  calculation_result = input_string;
  return true;
}
}  // namespace calculator
