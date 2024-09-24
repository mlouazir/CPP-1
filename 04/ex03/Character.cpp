/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:23:38 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 19:48:31 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    for (int i = 0; i < 4; i++)
    {
        slots[i] = NULL;
    }
}

Character::Character( const std::string& name ) {
    this->name = name;
    for (int i = 0; i < 4; i++)
    {
        slots[i] = NULL;
    }
}

Character::Character( const Character& obj) {
    *this = obj;
}

Character& Character::operator=( const Character& obj) {
    if (this != obj) {
        for (int i = 0; i < 4; i++) {
            if (slots[i] != NULL) {
                delete slots[i];
                slots[i] = NULL;
            }
        }
        this->slots = obj.getInventory();
        this->name = obj.getName();
    }
}

AMateria* getInventory() const {
    return slots;
}

void Character::equip(AMateria* m) {
    if (!m) {
        std::cout << "Invalid Materia!!!\n";
        return ;
    }
    for(int i = 0; i < 4; i++) {
        if (slots[i] == NULL) {
            slots[i] = m;
            std::cout << "The Material is at index " << i << std::endl;
        }
    }
}

void Character::unequip(int idx)  {
    if ((i < 4 && i > 0) && slots[i] != NULL) {
        slots[i] = NULL;
        return ;
    }
    std::cout << "Invalid Index!!!\n";
}

void Charcter::use(int idx, ICharacter& target) {
    if ((i < 4 && i > 0) && slots[i] != NULL) {
        slots[idx].use(target);
        return ;
    }
    std::cout << "Invalid Index!!!\n";
}

const std::string& Character::getName() const {
    return name;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (slots[i] != NULL)
            delete slots[i];
    }
}