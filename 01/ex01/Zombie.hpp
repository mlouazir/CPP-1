#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie() {};
    Zombie( std::string name ) : name(name) {}
    void announce( void );
    void setZombieName( std::string name );
    ~Zombie() {
        std::cout << name << std::endl;
    };
};

Zombie* zombieHorde( int N, std::string name );

#endif