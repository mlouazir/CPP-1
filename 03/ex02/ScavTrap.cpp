#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor\n";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap( const std::string& name )
{
    std::cout << "ScavTrap " << name << " Name Constructor\n";
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& obj )
{
    *this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    if (this != &obj) {
        this->name = obj.getName();
        this->hitPoints = obj.getHitPoints();
        this->energyPoints = obj.getEnergyPoints();
        this->attackDamage = obj.getAttackDamage();
    }
    return *this;
}

void ScavTrap::attack( const std::string& target )
{
    if (this->hitPoints > 0 && this->energyPoints > 0) {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    } else if (this->hitPoints == 0)
        std::cout << "ScavTrap " << this->name << " is dead and can't attack " << target << std::endl;
    else if (this->energyPoints == 0)
        std::cout << "ScavTrap " << this->name << " has no more energy points to attack!\n";
}

void ScavTrap::guardGate() {
    std::cout << this->name << " ScavTrap is now in keeper mode.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " Destructor\n";
}