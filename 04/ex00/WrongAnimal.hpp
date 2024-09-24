/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:00:48 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 11:44:22 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal( const WrongAnimal& obj );
    WrongAnimal& operator=( const WrongAnimal& obj );
    void makeSound() const;
    virtual std::string getType() const;
    virtual ~WrongAnimal();
};