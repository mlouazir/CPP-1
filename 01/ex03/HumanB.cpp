#include "HumanB.hpp"

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n";
}

void HumanB::setWeapon( Weapon *weapon )
{
    this->weapon = weapon;
}