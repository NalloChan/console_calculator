
#pragma once

#include <string_view>

namespace calculator::message {
constexpr std::string_view announce{"Please enter expression to calculate: "};
constexpr std::string_view how_to_exit{"Enter 'exit' to exit."};
constexpr std::string_view invalid_input{"Invalid input."};
}  // namespace calculator::message
