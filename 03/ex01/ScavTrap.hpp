#ifndef SCAV_HPP
#define SCAV_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap() {std::cout << "ScavTrap Def Cons" << std::endl;};
    ScavTrap( std::string& name ) : ClapTrap(name) {std::cout << "ScavTrap Def Cons" << std::endl;};
    void guardGate();
    ~ScavTrap() {std::cout << "ScavTrap Des" << std::endl;};
};

#endif