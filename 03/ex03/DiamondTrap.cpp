#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default Constructor\n";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap Name Constructor\n";
    DiamondTrap::name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap& obj )
{
    *this = obj;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& obj )
{
    if (this != &obj) {
        ClapTrap::name = obj.getName();
        DiamondTrap::name = obj.getNameNew();
        this->hitPoints = obj.getHitPoints();
        this->energyPoints = obj.getEnergyPoints();
        this->attackDamage = obj.getAttackDamage();
    }
    return *this;
}

std::string DiamondTrap::getNameNew() const
{
    return DiamondTrap::name;
}

void DiamondTrap::whoAmI( )
{
    std::cout << "My name is " << DiamondTrap::name << " and my clapTap name " << ClapTrap::name << "\n";
}

DiamondTrap::~DiamondTrap( )
{
    std::cout << "DiamondTrap Destructor\n";
}