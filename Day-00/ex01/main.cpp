/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:44:18 by mlouazir          #+#    #+#             */
/*   Updated: 2024/06/08 22:24:07 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook		phoneBook;
	std::string		input;
	int				result = 0;

	while (1)
	{
		std::cout << "Enter One of Three = ADD - SEARCH - EXIT\n";
		std::cin >> input;
		if (std::cin.eof())
			break;
		if (input == "ADD")
			result = phoneBook.add();
		else if (input == "SEARCH")
			result = phoneBook.search();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Wrong input\n";
		if (result)
			break ;
	}
	std::cout << "System Closed" << std::endl;
	return 0;
}

