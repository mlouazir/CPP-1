/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:18:06 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 17:42:17 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( ) {
    std::cout << "Brain Constructor\n";
    this->ideas = new std::string[100];
    index = 0;
}

Brain::Brain( const Brain& obj ) {
    std::cout << "Brain Copy Constructor\n";
    this->ideas = new std::string[100];
    *this = obj;
}

Brain& Brain::operator=( const Brain& obj ) {
    if (this != &obj) {
        std::string *ideas = obj.getIdeas();
        for (size_t i = 0; i < 100; i++) {
            this->ideas[i] = std::string(ideas[i].c_str());
        }
        index = obj.getIndex();
    }
    return *this;
}

void Brain::setIdea( std::string idea ) {
    if (index < 99) {
        ideas[index++] = idea;
    } else {
        std::cout << "The Brain is full of ideas\n";
    }
}

std::string* Brain::getIdeas( ) const {
    return ideas;
}

void Brain::setIndex( int idx ) {
    index = idx;
}

int Brain::getIndex( ) const {
    return index;
}

Brain::~Brain( ) {
    delete[] this->ideas;
    std::cout << "Brain Destructor\n";
}