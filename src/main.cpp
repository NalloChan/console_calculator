
#include <iostream>
#include <random>

int main()
{
    std::cout << "Hello, World!" << std::endl;

    std::uniform_int_distribution<int> dist(0, 1);
    auto random_device = std::mt19937{std::random_device{}()};
    auto num = dist(random_device);

    if (num == 0)
    {
        std::cout << "Number is 0" << std::endl;
    }
    else
    {
        std::cout << "Number is other than 0" << std::endl;
    }

    return 0;
}
