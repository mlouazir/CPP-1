/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:46:33 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 15:41:44 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    AMateria* slots[4];
    std::string name;
public:
    Character( );
    Character( const std::string& name );
    Character( const Character& obj );
    Character& operator=( const Character& obj );
    void equip( AMateria* m );
    void unequip( int idx );
    void use( int idx, ICharacter& target );
    const std::string& getName( ) const;
    AMateria* const* getInventory( ) const;
    ~Character( );
};