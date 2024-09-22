#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap(name + "_clap_name")
{
    this->name = name;
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
        this->name = obj.getName();
        this->name = obj.getNameNew();
        this->hitPoints = obj.getHitPoints();
        this->energyPoints = obj.getEnergyPoints();
        this->attackDamage = obj.getAttackDamage();
    }
    return *this;
}

std::string DiamondTrap::getNameNew() const
{
    return this->name;
}

void DiamondTrap::whoAmI( )
{
    std::cout << "My name is " << this->name << " and my clapTap name " << ClapTrap::name << "\n";
}

DiamondTrap::~DiamondTrap( )
{

}