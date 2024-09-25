/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:18:36 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 14:35:27 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( ) {
    std::cout << "Animal's Constructor\n";
    type = "Unknown Animal";
}

Animal::Animal( const Animal& obj ) {
    std::cout << "Copy Constructor\n";
    *this = obj;
}

Animal& Animal::operator=(  const Animal& obj ) {
    if (this != &obj) {
        type = obj.getType();
    }
    return *this;
}

void Animal::makeSound( ) const {
    std::cout << "Unknown Animal's Sound\n";
}

std::string Animal::getType( ) const {
    return type;
}

Animal::~Animal( ) {
    std::cout << "Animal's Destructor\n";
}
