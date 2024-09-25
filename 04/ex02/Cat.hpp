/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:46:06 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 14:58:59 by mlouazir         ###   ########.fr       */
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
    Cat( );
    Cat( const Cat& obj );
    Cat& operator=( const Cat& obj );
    void makeSound( ) const;
    Brain& getBrain( ) const;
    void setIdea( std::string idea );
    ~Cat( );
};