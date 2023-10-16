
#include "calculator/calculator.hpp"

#include <format>
#include <iostream>
#include <utility>

#include "calculator/calculator_define.hpp"
#include "calculator/calculator_message.hpp"

namespace calculator {
Calculator::Calculator(console_io::ConsoleIO&& console_io,
                       Arithmetic<value_type>&& arithmetic)
    : console_io(std::move(console_io)), arithmetic(std::move(arithmetic)) {}

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

auto Calculator::announce() -> void { console_io.output(message::announce); }

auto Calculator::input() -> void { input_string = console_io.input(); }

auto Calculator::output() -> void {
  console_io.output(std::format("{}{}", define::equal, calculation_result));
  console_io.insert_new_line();
}

auto Calculator::process() -> bool {
  if (input_string == define::exit) {
    return false;
  }

  calculate();

  return true;
}

auto Calculator::calculate() -> void {
  auto read_numbers = std::string{"0"};
  auto opr = arithmetic.plus;
  auto answer = double{};
  input_string += arithmetic.equal;

  for (auto&& c : std::as_const(input_string)) {
    if (arithmetic.is_numeric(c)) {
      read_numbers += c;
    } else if (arithmetic.is_operator(c)) {
      if (read_numbers.empty()) {
        continue;
      }

      try {
        auto number = std::stod(read_numbers);
        read_numbers.clear();
        answer = arithmetic.get_formula(opr)(answer, number);
      } catch (const std::invalid_argument& e) {
        calculation_result = message::invalid_input;
        return;
      }

      opr = c;
    }
  }

  calculation_result = std::to_string(answer);
}
}  // namespace calculator
