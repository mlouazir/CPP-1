#ifndef DIA_HPP
#define DIA_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap( const std::string& name );
    DiamondTrap( const DiamondTrap& obj );
    DiamondTrap& operator=( const DiamondTrap& obj );
    void whoAmI();
    std::string getNameNew( void ) const;
    ~DiamondTrap();
};

#endif