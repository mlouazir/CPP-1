/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:10:26 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 11:46:04 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat Constructor\n";
    type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& obj ) {
    *this = obj;
}

WrongCat& WrongCat::operator=(  const WrongCat& obj ) {
    if (this != &obj) {
        type = obj.getType();
    }
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongMeowing !!!\n";
}

std::string WrongCat::getType() const {
    return type;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor\n";
}