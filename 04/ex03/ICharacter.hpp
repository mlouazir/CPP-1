/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:45:14 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 17:28:49 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter( ) {}
    virtual std::string const & getName( ) const = 0;
    virtual void equip( AMateria* m ) = 0;
    virtual void unequip( int idx ) = 0;
    virtual void use( int idx, ICharacter& target ) = 0;
};