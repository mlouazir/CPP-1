#include "ScavTrap.hpp"

int main()
{

    {
        ClapTrap c("hmed");
        c.attack("someOne");
    }

    std::cout << "====================================\n";

    ScavTrap s("John");
    s.attack("Enemy");
    s.guardGate();

    return 0;
}
