#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor\n";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
}

FragTrap::FragTrap( const std::string& name )
{
    std::cout << "FragTrap " << name << " Name Constructor\n";
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& obj )
{
    *this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    if (this != &obj) {
        this->name = obj.getName();
        this->hitPoints = obj.getHitPoints();
        this->energyPoints = obj.getEnergyPoints();
        this->attackDamage = obj.getAttackDamage();
    }
    return *this;
}

void FragTrap::highFivesGuys( void ) {
    std::cout << this->name << " FragTrap is now in keeper mode.\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " Destructor\n";
}