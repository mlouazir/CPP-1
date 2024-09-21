#ifndef TRAP_HPP
#define TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
    FragTrap();
    FragTrap( const std::string& name );
    FragTrap( const FragTrap& obj );
    FragTrap& operator=( const FragTrap& obj );
    void highFivesGuys();
    ~FragTrap();
};

#endif