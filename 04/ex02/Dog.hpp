/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:46:06 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 14:26:02 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "AAnimal.hpp"

class Dog : public AAnimal
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