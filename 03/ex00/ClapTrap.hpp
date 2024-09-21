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
    ClapTrap();
    ClapTrap( const std::string& name );
    ClapTrap( const ClapTrap& obj );
    ClapTrap& operator=( const ClapTrap& obj);
    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    std::string getName( void ) const;
    int getHitPoints( void ) const;
    int getEnergyPoints( void ) const;
    int getAttackDamage( void ) const;
    ~ClapTrap();
};

#endif