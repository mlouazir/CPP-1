/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:18:42 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 14:52:27 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( ) {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat's Constructor\n";
}

Cat::Cat( const Cat& obj ) {
    brain = new Brain();
    type = "Cat";
    *this = obj;
    std::cout << "Cat's Copy Constructor\n";
}

Cat& Cat::operator=( const Cat& obj ) {
    if (this != &obj) {
        *brain = obj.getBrain();
    }
    return *this;
}

void Cat::makeSound( ) const {
    std::cout << "Meowing !!!\n";
}

void Cat::setIdea( std::string idea ) {
    brain->setIdea(idea);
}

Brain& Cat::getBrain( ) const {
    return *brain;
}

Cat::~Cat( ) {
    delete brain;
    std::cout << "Cat's Destructor\n";
}
