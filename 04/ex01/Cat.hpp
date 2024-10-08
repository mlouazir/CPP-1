/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:46:06 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 14:51:47 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain* brain;
public:
    Cat( );
    Cat( const Cat& obj );
    Cat& operator=( const Cat& obj );
    void makeSound( ) const;
    Brain& getBrain( ) const;
    void setIdea( std::string idea );
    ~Cat( );
};