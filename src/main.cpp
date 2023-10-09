
#include "calculator/calculator.hpp"
#include "console_io/console_io.hpp"
#include <string_view>

int main()
{
    auto console_io = std::make_shared<console_io::ConsoleIO>();

    auto calculator = calculator::Calculator(console_io);
    calculator.run();

    return 0;
}
