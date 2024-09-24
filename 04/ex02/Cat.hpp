/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:46:06 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 14:25:36 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "AAnimal.hpp"

class Cat : public AAnimal
{
private:
    Brain* brain;
public:
    Cat();
    Cat( const Cat& obj );
    Cat& operator=( const Cat& obj );
    void makeSound() const;
    std::string getType() const;
    Brain& getBrain() const;
    ~Cat();
};