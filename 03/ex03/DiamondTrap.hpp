#ifndef DIA_HPP
#define DIA_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string clapName;
public:
    DiamondTrap();
    DiamondTrap( const std::string& name );
    DiamondTrap( const DiamondTrap& obj );
    DiamondTrap& operator=( const DiamondTrap& obj );
    void whoAmI();
    std::string getClapName( void ) const;
    ~DiamondTrap();
};

#endif