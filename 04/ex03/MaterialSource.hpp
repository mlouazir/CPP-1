/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:52:16 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 20:04:04 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MaterialSource : public IMaterialSource
{
private:
    AMateria* materias[4];
public:
    MateriaSource();
    MateriaSource( const MaterialSource& obj);
    MateriaSource& operator=( const MaterialSource& obj);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    AMateria* getInventory() const;
    ~MateriaSource();
}