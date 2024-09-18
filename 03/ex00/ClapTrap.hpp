#ifndef CLAP_HPP
#define CLAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) {std::cout << "Default Constructor Called\n";};
    ClapTrap( std::string& name ) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {std::cout << name << " Constructor Called\n";};
    ClapTrap( ClapTrap& obj ) {
        *this = obj;
    };
    ClapTrap& operator=( ClapTrap& obj) {
        if (this != &obj) {
            this->name = obj.getName();
            this->hitPoints = obj.getHitPoints();
            this->energyPoints = obj.getEnergyPoints();
            this->attackDamage = obj.getAttackDamage();
        }
        return *this;
    };
    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    std::string getName( void ) {return this->name;};
    int getHitPoints( void ) {return this->hitPoints;};
    int getEnergyPoints( void ) {return this->energyPoints;};
    int getAttackDamage( void ) {return this->attackDamage;};
    ~ClapTrap() {std::cout << name << " Destructor Called\n";};
};

#endif