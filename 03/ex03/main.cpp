#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
    }

    std::cout << "====================================\n";
    
    {
        FragTrap f("mike");
        f.attack("john");
        f.highFivesGuys();
    }

    std::cout << "====================================\n";

    {
        DiamondTrap d("mike");
        d.attack("john");
        // d.guardGate();
        d.highFivesGuys();
        d.whoAmI();
    }

    return 0;
}
