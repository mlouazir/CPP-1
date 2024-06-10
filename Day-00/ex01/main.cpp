/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:44:18 by mlouazir          #+#    #+#             */
/*   Updated: 2024/06/10 10:33:54 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook		phoneBook;
	std::string		input;
	std::string		tmp;

	while (1)
	{
		std::cout << "Enter One of Three = ADD - SEARCH - EXIT\n";
		input = setInput();
		if (input == "ADD")
			phoneBook.add();
		else if (input == "SEARCH")
			phoneBook.search();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Wrong input\n";
		if (std::cin.eof())
			break ;
	}
	std::cout << "System Closed" << std::endl;
	return 0;
}
