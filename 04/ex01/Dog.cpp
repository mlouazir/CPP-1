/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:18:47 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 14:47:12 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( ) {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog's Constructor\n";
}

Dog::Dog( const Dog& obj ) {
    type = "Dog";
    brain = new Brain();
    *this = obj;
    std::cout << "Dog's Copy Constructor\n";
}

Dog& Dog::operator=( const Dog& obj ) {
    if (this != &obj) {
        *brain = obj.getBrain();
    }
    return *this;
}

void Dog::makeSound( ) const {
    std::cout << "Barking !!!!!\n";
}

Brain& Dog::getBrain( ) const {
    return *brain;
}

Dog::~Dog( ) {
    delete brain;
    std::cout << "Dog's Destructor\n";
}