/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:38:27 by mlouazir          #+#    #+#             */
/*   Updated: 2024/06/08 16:27:37 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	PhoneBook::add(void)
{
	Contact newContact;

	std::cout << "Enter first_name :\n";
	std::cin >> newContact.first_name;
	if (std::cin.eof())
		return (1);
	std::cout << "Enter last_name :\n";
	std::cin >> newContact.last_name;
	if (std::cin.eof())
		return (1);
	std::cout << "Enter nickname :\n";
	std::cin >> newContact.nickname;
	if (std::cin.eof())
		return (1);
	std::cout << "Enter phone_number :\n";
	std::cin >> newContact.phone_number;
	if (std::cin.eof())
		return (1);
	std::cout << "Enter darkest_secret :" << std::endl;
	std::cin >> newContact.darkest_secret;
	if (std::cin.eof())
		return (1);
	if (this->counter < 8)
		this->contacts[this->counter] = newContact;
	else
		this->contacts[0] = newContact;
	return (this->counter++, 0);
}

void	truncIfNeeded(std::string string)
{
	if (string.length() <= 10)
	{
		std::cout.width(10);
		std::cout << std::right << string;
	}
	else
	{
		std::cout.width(10);
		std::cout << std::right << string.substr(0, 9) + ".";
	}
}

void	printContactInfo(Contact contact)
{
	std::cout << "First Name : " << contact.first_name << '\n';
	std::cout << "Last Name : " << contact.last_name << '\n';
	std::cout << "Nickname : " << contact.nickname << '\n';
	std::cout << "Phone Number : " << contact.phone_number << '\n';
	std::cout << "Darkest Secret : " << contact.darkest_secret << '\n';
}

void	printColumns(int pass, int i, \
std::string firstName, std::string lastName, std::string nickName)
{
	std::cout.width(10); std::cout << "---------------------------------------------\n";
	std::cout.width(1); std::cout << std::right << "|";
	if (!pass)
	{
		std::cout.width(10);
		std::cout << std::right << "index";
	}
	else
	{
		std::cout.width(10);
		std::cout << std::right << i;
	}
	std::cout.width(1); std::cout << std::right << "|";
	truncIfNeeded(firstName);
	std::cout.width(1); std::cout << std::right << "|";
	truncIfNeeded(lastName);
	std::cout.width(1); std::cout << std::right << "|";
	truncIfNeeded(nickName);
	std::cout.width(1); std::cout << std::right << "|" << std::endl;
}

int	PhoneBook::search(void)
{
	int input;
	int	i = 0;

	if (!this->counter)
		return (std::cout << "No Contacts Saved\n", 0);
	printColumns(0, 0, "first name", "last name", "nickname");
	while (i < this->counter && i < 8)
	{
		printColumns(1, i, this->contacts[i].first_name, \
		this->contacts[i].last_name, this->contacts[i].nickname);
		i++;
	}
	std::cout.width(10); std::cout << "---------------------------------------------\n";
	std::cout << "Choose the index\n";
	std::cin >> input;
	while (std::cin.fail() || input > this->counter || input > 7)
	{
		if (std::cin.eof())
			return (1);
		std::cout << "Wrong input, try again\n";
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		std::cin >> input;
	}
	printContactInfo(this->contacts[input]);
	return (0);
}
