
#include <iostream>
#include <random>

int main()
{
    std::cout << "Hello, World!" << std::endl;

    std::uniform_int_distribution<int> dist(0, 8);
    auto random_device = std::mt19937{std::random_device{}()};
    auto num = dist(random_device);

    switch (num)
    {
    case 0:
        std::cout << "0" << std::endl;
        break;
    case 1:
        std::cout << "1" << std::endl;
        break;
    case 2:
        std::cout << "2" << std::endl;
        break;
    default:
        std::cout << "other" << std::endl;
        break;
    }

    return 0;
}
