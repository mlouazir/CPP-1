/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:54:14 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 20:05:15 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
    {
        slots[i] = NULL;
    }
}

MateriaSource::MateriaSource( const MateriaSource& obj) {
    *this = obj;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& obj) {
    if (this != &obj) {
        for (int i = 0; i < 4; i++) {
            if (slots[i] != NULL) {
                delete slots[i];
                slots[i] = NULL;
            }
        }
        slots = obj.getInventory();
    }
    return *this;
}

AMateria* MateriaSource::getInventory() const {
    return materias;
}
void MateriaSource::learnMateria( AMateria* m ) {
    for (int i = 0; i < 4; i++) {
        if (slots[i] == NULL) {
            slots[i] = m;
            return ;
        }
    }
    std::cout << "Unavailble Space\n";
}

AMateria* MateriaSource::createMateria( const std::string& name ) {
    for (int i = 0; i < 4; i++) {
        if (slots[i] != NULL && slots[i].getName() == name) {
            return slots[i].clone();
        }
    }
    std::cout << "Materia Not Found\n";
    return NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (slots[i] != NULL)
            delete slots[i];
    }
}
