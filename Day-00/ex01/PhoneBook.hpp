/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:38:38 by mlouazir          #+#    #+#             */
/*   Updated: 2024/06/10 10:23:38 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PH
#define PH

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int		counter;
	int		size;

public:
	PhoneBook() : counter(0), size(0){};
	int	add(void);
	int	search(void);
};

int			isEmpty(std::string input);
std::string	setInput();
#endif