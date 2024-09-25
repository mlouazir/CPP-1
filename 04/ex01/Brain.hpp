/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:47:19 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 14:40:51 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
    std::string* ideas;
    int index;
public:
    Brain( );
    Brain( const Brain& obj );
    Brain& operator=( const Brain& obj );
    void setIdea( std::string idea );
    std::string* getIdeas ( ) const;
    void setIndex( int idx );
    int getIndex( ) const;
    ~Brain( );
};