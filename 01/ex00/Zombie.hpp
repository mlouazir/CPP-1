#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie( std::string name ) : name(name) {}
    void announce( void );
    ~Zombie() {std::cout << name << std::endl;};
};

void randomChump( std::string name);

Zombie* newZombie( std::string name);

#endif