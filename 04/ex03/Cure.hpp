/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:42:55 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 19:29:55 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure( const Cure& obj );
    Cure& operator=( const Cure& obj );
    AMateria* clone() const;
    void use(ICharacter& taget);
    ~Cure();
};