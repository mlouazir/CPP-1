/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:46:22 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 14:34:40 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal( );
    Animal( const Animal& obj );
    Animal& operator=( const Animal& obj );
    virtual void makeSound( ) const;
    virtual std::string getType( ) const;
    virtual ~Animal( );
};
