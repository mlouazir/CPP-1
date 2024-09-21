#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default Constructor Called\n";
}

ClapTrap::ClapTrap( const std::string& name ) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << name << " Constructor Called\n";
}

ClapTrap::ClapTrap( const ClapTrap& obj )
{
    *this = obj;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& obj )
{
    if (this != &obj)
    {
        this->name = obj.getName();
        this->hitPoints = obj.getHitPoints();
        this->energyPoints = obj.getEnergyPoints();
        this->attackDamage = obj.getAttackDamage();
    }
    return *this;
}

void ClapTrap::attack( const std::string& target )
{
    if (this->hitPoints > 0 && this->energyPoints > 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    } else if (this->hitPoints == 0)
        std::cout << this->name << " is dead and can't attack " << target << std::endl;
    else if (this->energyPoints == 0)
        std::cout << this->name << " has no more energy points to attack!\n";
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if (this->hitPoints > 0) {
        std::cout << this->name << " took " << amount << " of damage!" << std::endl;
        this->hitPoints -= amount;
        if (this->hitPoints < 0)
            this->hitPoints = 0;
    } else
        std::cout << this->name << " is dead and can't take any more damage\n";
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->hitPoints > 0 && this->energyPoints > 0) {
        std::cout << this->name << " got repaired " << amount << " points!" << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
    } else if (this->hitPoints == 0)
        std::cout << this->name << " is dead and can't take be healed\n";
    else if (this->energyPoints == 0)
        std::cout << this->name << " has no more energy point to heal himself!\n";
}

std::string ClapTrap::getName( void ) const
{
    return this->name;
}

int ClapTrap::getHitPoints( void ) const
{
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints( void ) const
{
    return this->energyPoints;
}

int ClapTrap::getAttackDamage( void ) const
{
    return this->attackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " Destructor Called\n";
}