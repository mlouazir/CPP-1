/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:38:38 by mlouazir          #+#    #+#             */
/*   Updated: 2024/06/07 19:59:32 by mlouazir         ###   ########.fr       */
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

public:
	PhoneBook() : counter(0){};
	int	add(void);
	int	search(void);
	void printContacts(void);
};

#endif