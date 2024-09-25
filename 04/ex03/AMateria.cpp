/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:35:34 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 16:28:02 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( ) {
    
}

AMateria::AMateria( const std::string& type ) {
    this->type = type;
}

AMateria::AMateria( const AMateria& obj ) {
    *this = obj;
}

AMateria& AMateria::operator=( const AMateria& obj ) {
    type = std::string(obj.getType().c_str());
    return *this;
}

void AMateria::use( ICharacter& taget ) {
    (void)taget;
}

const std::string& AMateria::getType( ) const {
    return type;
}

AMateria::~AMateria( ) {
    
}