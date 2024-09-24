/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:18:42 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 11:45:55 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat's Constructor\n";
    type = "Cat";
}

Cat::Cat( const Cat& obj ) {
    *this = obj;
}

Cat& Cat::operator=(  const Cat& obj ) {
    if (this != &obj) {
        type = obj.getType();
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meowing !!!\n";
}

std::string Cat::getType() const {
    return type;
}

Cat::~Cat() {
    std::cout << "Cat's Destructor\n";
}
