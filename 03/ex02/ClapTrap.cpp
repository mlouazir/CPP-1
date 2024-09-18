#include "ClapTrap.hpp"

void ClapTrap::attack( const std::string& target ) {
    if (this->hitPoints > 0 && this->energyPoints > 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    } else if (this->hitPoints == 0)
        std::cout << this->name << " is dead and can't attack " << target << std::endl;
    else if (this->energyPoints == 0)
        std::cout << this->name << " has no more energy points to attack!\n";
}

void ClapTrap::takeDamage( unsigned int amount ) {
    if (this->hitPoints > 0) {
        std::cout << this->name << " took " << amount << " of damage!" << std::endl;
        this->hitPoints -= amount;
        if (this->hitPoints < 0)
            this->hitPoints = 0;
    } else
        std::cout << this->name << " is dead and can't take any more damage\n";
}

void ClapTrap::beRepaired( unsigned int amount ) {
    if (this->hitPoints > 0 && this->energyPoints > 0) {
        std::cout << this->name << " got repaired " << amount << " points!" << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
    } else if (this->hitPoints == 0)
        std::cout << this->name << " is dead and can't take be healed\n";
    else if (this->energyPoints == 0)
        std::cout << this->name << " has no more energy point to heal himself!\n";
}