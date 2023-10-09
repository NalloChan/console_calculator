
#pragma once

#include <string_view>

namespace console_io
{
    class ConsoleIO
    {
    public:
        ConsoleIO();
        ~ConsoleIO();

        auto output(std::string_view message) -> void;
        auto input() -> std::string;
    };
}
