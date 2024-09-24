/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:47:19 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/24 12:48:09 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
    int index;
    std::string* ideas;
public:
    Brain();
    Brain( const Brain& obj );
    Brain& operator=( const Brain& obj );
    void setIdea( std::string idea );
    std::string* getIdeas() const;
    ~Brain();
};