#include "ClapTrap.hpp"

int main()
{
    std::string name = "hmed";

    ClapTrap c1(name);

    c1.attack("test");

    c1.attack("test");

    c1.takeDamage(100);

    c1.attack("test");

    c1.beRepaired(100);
    return 0;
}
