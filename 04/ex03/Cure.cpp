/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:43:49 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 16:36:39 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( ) {
    type = "cure";
}

Cure::Cure( const Cure& obj ) {
    type = "cure";
    *this = obj;
}

Cure& Cure::operator=( const Cure& obj ) {
    (void)obj;
    return *this;
}

AMateria* Cure::clone( ) const {
    return new Cure();
}

void Cure::use( ICharacter& target ) {
    std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure( ) {
    
}