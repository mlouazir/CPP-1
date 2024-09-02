#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    if (ac != 2)
        return (std::cout << "Please provide one of the following Log Levels :\nDEBUG, INFO, WARNING, ERROR.",1);

    harl.complain(av[1]);

    return 0;
}
