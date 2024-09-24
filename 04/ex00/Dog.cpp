/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:18:47 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 11:45:59 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog's Constructor\n";
    type = "Dog";
}

Dog::Dog( const Dog& obj ) {
    *this = obj;
}

Dog& Dog::operator=(  const Dog& obj ) {
    if (this != &obj) {
        type = obj.getType();
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Barking !!!!!\n";
}

std::string Dog::getType() const {
    return type;
}

Dog::~Dog() {
    std::cout << "Dog's Destructor\n";
}