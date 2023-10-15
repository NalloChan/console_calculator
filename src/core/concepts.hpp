
#pragma once

#include <concepts>
#include <type_traits>

namespace concepts {
template <typename T>
concept arithmetic = std::is_arithmetic_v<T>;
}
