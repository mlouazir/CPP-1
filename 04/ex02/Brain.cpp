/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:18:06 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 14:00:49 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Constructor\n";
    index = 0;
    this->ideas = new std::string[100];
}

Brain::Brain( const Brain& obj) {
    std::cout << "Brain Copy Constructor\n";
    *this = obj;
}

Brain& Brain::operator=(const Brain& obj) {
    if (this != &obj) {
        ideas = obj.getIdeas();
    }
    return *this;
}

void Brain::setIdea( std::string idea) {
    if (index < 99) {
        ideas[index++] = idea;
    } else {
        std::cout << "The Brain is full of ideas\n";
    }
}

std::string* Brain::getIdeas() const {
    return ideas;
}

Brain::~Brain() {
    delete[] this->ideas;
    std::cout << "Brain Destructor\n";
}