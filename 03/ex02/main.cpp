#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    return 0;
}
