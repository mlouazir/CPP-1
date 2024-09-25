/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:52:16 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 15:57:55 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria** materias;
public:
    MateriaSource( );
    MateriaSource( const MateriaSource& obj );
    MateriaSource& operator=( const MateriaSource& obj );
    void learnMateria( AMateria* );
    AMateria* createMateria( std::string const & type );
    AMateria** const& getInventory( ) const;
    ~MateriaSource( );
};