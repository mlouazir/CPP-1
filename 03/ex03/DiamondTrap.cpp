#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap(name)
{
    this->clapName = name + "_clap_name";
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
        this->clapName = obj.getClapName();
        this->hitPoints = obj.getHitPoints();
        this->energyPoints = obj.getEnergyPoints();
        this->attackDamage = obj.getAttackDamage();
    }
    return *this;
}

std::string DiamondTrap::getClapName() const
{
    return this->clapName;
}

void DiamondTrap::whoAmI( )
{
    std::cout << "My name is " << name << " and my clapTap name " << clapName << "\n";
}

DiamondTrap::~DiamondTrap( )
{

}