/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:39:49 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 15:42:27 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria
{
public:
    Ice( );
    Ice( const Ice& obj );
    Ice& operator=( const Ice& obj );
    AMateria* clone( ) const;
    void use( ICharacter& taget );
    ~Ice( );
};