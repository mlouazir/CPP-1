/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:23:38 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 16:37:36 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"

Character::Character( ) {
    for (int i = 0; i < 4; i++) {
        slots[i] = NULL;
    }
}

Character::Character( const std::string& name ) {
    this->name = name;
    for (int i = 0; i < 4; i++) {
        slots[i] = NULL;
    }
}

Character::Character( const Character& obj ) {
    for (int i = 0; i < 4; i++) {
        slots[i] = NULL;
    }
    *this = obj;
}

Character& Character::operator=( const Character& obj ) {
    if (this != &obj) {
        AMateria* const* objSlots = obj.getInventory();
        for (int i = 0; i < 4; i++) {
            if (slots[i]) {
                delete slots[i];
                slots[i] = NULL;
            }
            if (objSlots[i]) {
                slots[i] = objSlots[i]->clone();
            }
        }
        this->name = std::string(obj.getName().c_str());
    }
    return *this;
}

AMateria* const* Character::getInventory( ) const {
    return slots;
}

void Character::equip( AMateria* m ) {
    if (!m) {
        std::cout << "Invalid Materia!!!\n";
        return ;
    }
    for(int i = 0; i < 4; i++) {
        if (!slots[i]) {
            slots[i] = m->clone();
            return ;
        }
    }
    std::cout << "The Inventory Is Full" << std::endl;
}

void Character::unequip( int idx )  {
    if ((idx < 4 && idx >= 0) && slots[idx]) {
        delete slots[idx];
        slots[idx] = NULL;
        return ;
    }
    std::cout << "Invalid Index!!!\n";
}

void Character::use( int idx, ICharacter& target ) {
    if ((idx < 4 && idx >= 0) && slots[idx]) {
        slots[idx]->use(target);
        return ;
    }
    std::cout << "Invalid Index!!!\n";
}

const std::string& Character::getName( ) const {
    return name;
}

Character::~Character( ) {
    for (int i = 0; i < 4; i++) {
        if (slots[i]) {
            delete slots[i];
        }
    }
}