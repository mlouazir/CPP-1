#ifndef FRAG_HPP
#define FRAG_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
    FragTrap() {std::cout << "FragTrap Def Cons" << std::endl;};
    FragTrap( std::string& name ) : ClapTrap(name) {std::cout << "FragTrap Def Cons" << std::endl;};
    void highFivesGuys();
    ~FragTrap() {std::cout << "ScavTrap Des" << std::endl;};
};

#endif