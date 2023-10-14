
#pragma once

#include <string_view>

namespace calculator::message {
constexpr std::string_view announce{"Please enter expression to calculate: "};
constexpr std::string_view how_to_exit{"Enter 'exit' to exit."};
}  // namespace calculator::message
