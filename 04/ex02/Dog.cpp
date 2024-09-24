/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:18:47 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 14:26:04 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog's Constructor\n";
    type = "Dog";
    brain = new Brain();
}

Dog::Dog( const Dog& obj ) {
    *this = obj;
}

Dog& Dog::operator=(  const Dog& obj ) {
    if (this != &obj) {
        type = obj.getType();
        brain = &obj.getBrain();
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Barking !!!!!\n";
}

std::string Dog::getType() const {
    return type;
}

Brain& Dog::getBrain() const {
    return *brain;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog's Destructor\n";
}