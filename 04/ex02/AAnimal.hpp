/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:46:22 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 14:18:01 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal( const AAnimal& obj );
    AAnimal& operator=( const AAnimal& obj );
    virtual void makeSound() const = 0;
    virtual std::string getType() const;
    virtual ~AAnimal();
};
