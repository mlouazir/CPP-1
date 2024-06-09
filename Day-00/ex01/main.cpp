/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:44:18 by mlouazir          #+#    #+#             */
/*   Updated: 2024/06/10 00:14:09 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook		phoneBook;
	std::string		input;
	std::string		tmp;
	int				result;

	while (1)
	{
		result = 0;
		std::cout << "Enter One of Three = ADD - SEARCH - EXIT\n";
		getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (input == "ADD")
			result = phoneBook.add();
		else if (input == "SEARCH")
			result = phoneBook.search();
		else if (input == "EXIT")
			break ;
		else if (!isEmpty(input) && input.length() > 0)
			std::cout << "Wrong input\n";
		if (std::cin.eof())
			break ;
	}
	std::cout << "System Closed" << std::endl;
	return 0;
}
