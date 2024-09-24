/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:05:39 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 11:46:01 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal Constructor's\n";
    type = "Unknown WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal& obj ) {
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(  const WrongAnimal& obj ) {
    if (this != &obj) {
        type = obj.getType();
    }
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal Sound\n";
}

std::string WrongAnimal::getType() const {
    return type;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor's\n";
}