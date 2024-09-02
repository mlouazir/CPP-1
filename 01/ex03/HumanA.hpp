#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weapon;
public:
    HumanA( std::string name , Weapon &w ) : name(name), weapon(w) {};
    void attack();
};

#endif