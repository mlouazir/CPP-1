/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:18:36 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 14:35:27 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( ) {
    std::cout << "AAnimal's Constructor\n";
    type = "Unknown AAnimal";
}

AAnimal::AAnimal( const AAnimal& obj ) {
    std::cout << "Copy Constructor\n";
    *this = obj;
}

AAnimal& AAnimal::operator=(  const AAnimal& obj ) {
    if (this != &obj) {
        type = obj.getType();
    }
    return *this;
}

std::string AAnimal::getType( ) const {
    return type;
}

AAnimal::~AAnimal( ) {
    std::cout << "AAnimal's Destructor\n";
}
