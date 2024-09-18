#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie( std::string name ) : name(name)
{

}

void Zombie::announce( void ) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName( std::string name ) {
    this->name = name;
}

Zombie::~Zombie( void )
{
    std::cout << this->name << std::endl;
}