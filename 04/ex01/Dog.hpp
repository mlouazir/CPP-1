/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:46:06 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 12:33:04 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain* brain;
public:
    Dog();
    Dog( const Dog& obj );
    Dog& operator=( const Dog& obj );
    void makeSound() const;
    std::string getType() const;
    Brain& getBrain() const;
    ~Dog();
};