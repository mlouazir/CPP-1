/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:54:14 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 15:43:00 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( ) {
    materias = new AMateria*[4]; // Double Pointer, that has the capacity to hold an array of pointers to AMateria
    for (int i = 0; i < 4; i++) {
        materias[i] = NULL;
    }
}

MateriaSource::MateriaSource( const MateriaSource& obj ) {
    materias = new AMateria*[4];
    for (int i = 0; i < 4; i++) {
        materias[i] = NULL;
    }
    *this = obj;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& obj ) {
    if (this != &obj) {
        AMateria** objMaterias = obj.getInventory();
        for (int i = 0; i < 4; i++) {
            if (materias[i]) {
                delete materias[i];
                materias[i] = NULL;
            }
            if (objMaterias[i]) {
                materias[i] = objMaterias[i]->clone();
            }
        }
    }
    return *this;
}

AMateria** const& MateriaSource::getInventory( ) const {
    return materias;
}

void MateriaSource::learnMateria( AMateria* m ) {
    for (int i = 0; i < 4; i++) {
        if (!materias[i]) {
            materias[i] = m->clone();
            return ;
        }
    }
    std::cout << "Unavailble Space\n";
}

AMateria* MateriaSource::createMateria( const std::string& type ) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] && materias[i]->getType() == type) {
            return materias[i]->clone();
        }
    }
    std::cout << "Materia Not Found\n";
    return NULL;
}

MateriaSource::~MateriaSource( ) {
    for (int i = 0; i < 4; i++) {
        if (materias[i])
            delete materias[i];
    }
    delete[] materias;
}
