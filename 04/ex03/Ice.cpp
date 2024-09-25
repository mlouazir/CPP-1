/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:27:55 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 16:36:44 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( ) {
    type = "ice";
}

Ice::Ice( const Ice& obj ) {
    type = "ice";
    *this = obj;
}

Ice& Ice::operator=( const Ice& obj ) {
    (void)obj;
    return *this;
}

AMateria* Ice::clone( ) const {
    return new Ice();
}

void Ice::use( ICharacter& target ) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"  << std::endl;;
}

Ice::~Ice( ) {

}