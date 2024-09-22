#ifndef SCAV_HPP
#define SCAV_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap( const std::string& name );
    ScavTrap( const ScavTrap& obj );
    ScavTrap& operator=( const ScavTrap& obj );
    void attack( const std::string& target );
    void guardGate();
    ~ScavTrap();
};

#endif