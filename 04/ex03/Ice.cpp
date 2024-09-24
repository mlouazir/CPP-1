/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:27:55 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 18:44:04 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
    type = "ice";   
}

Ice::Ice( const Ice& obj) {
    *this = obj;
}

Ice& Ice::operator=(const Ice& obj ) {
    (void)obj;
    return *this;
}

AMateria* Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter& taget) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"
}

Ice::~Ice() {

}