/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:35:11 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 15:47:41 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;
public:
    AMateria( );
    AMateria( const std::string& type );
    AMateria( const AMateria& obj );
    AMateria& operator=( const AMateria& obj );
    const std::string& getType( ) const;
    virtual AMateria* clone( ) const = 0;
    virtual void use( ICharacter& taget );
    virtual ~AMateria( ) = 0;
};
