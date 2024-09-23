#include "ScavTrap.hpp"

int main()
{
    {
        ClapTrap c("hmed");
        c.attack("someOne");
    }

    std::cout << "====================================\n";

    {
        ScavTrap s("John");
        s.attack("Enemy");
        s.guardGate();
    }

    std::cout << "====================================\n";

    {
        ClapTrap *c = new ScavTrap;
        c->attack("ete");
        // c->guardGate();
        delete c;
    }
    return 0;
}
