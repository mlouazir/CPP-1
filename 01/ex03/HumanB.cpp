#include "HumanB.hpp"

HumanB::HumanB( std::string n ) : name(n), weapon(NULL) {

}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n";
}

void HumanB::setWeapon( Weapon *weapon )
{
    this->weapon = weapon;
}