/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:38:27 by mlouazir          #+#    #+#             */
/*   Updated: 2024/06/10 00:35:16 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	isEmpty(std::string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input.at(i) != 32 \
		&& input.at(i) != '\t' && input.at(i) != '\n')
			return (0);
	}
	return (1);
}

std::string	setInput()
{
	std::string tmp;

	getline(std::cin, tmp);
	while (isEmpty(tmp) || std::cin.eof())
	{
		if (std::cin.eof())
			return (tmp);
		std::cout << "Empty input\n";
		getline(std::cin, tmp);
	}
	return (tmp);
}

int	PhoneBook::add(void)
{
	Contact newContact;

	std::cout << "Enter first_name :\n";
	newContact.first_name = setInput();
	if (std::cin.eof())
		return (1);
	std::cout << "Enter last_name :\n";
	newContact.last_name = setInput();
	if (std::cin.eof())
		return (1);
	std::cout << "Enter nickname :\n";
	newContact.nickname = setInput();
	if (std::cin.eof())
		return (1);
	std::cout << "Enter phone_number :\n";
	newContact.phone_number = setInput();
	if (std::cin.eof())
		return (1);
	std::cout << "Enter darkest_secret :" << std::endl;
	newContact.darkest_secret = setInput();
	if (std::cin.eof())
		return (1);
	if (this->counter > 7)
		this->counter = 0;
	this->contacts[this->counter] = newContact;
	if (this->size < 8)
		this->size++;
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
	std::cout << "---------------------------------------------\n";
	std::cout << std::right << "|";
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
	std::cout << std::right << "|";
	truncIfNeeded(firstName);
	std::cout << std::right << "|";
	truncIfNeeded(lastName);
	std::cout << std::right << "|";
	truncIfNeeded(nickName);
	std::cout << std::right << "|" << std::endl;
}

int	verifyInput(std::string input, int size)
{
	int		a;

	if (input.length() != 1)
		return (-1);
	if ('0' <= input.at(0) && input.at(0) <= '7')
	{
		a = atoi(input.c_str());
		if (a >= size)
			return (-1);
		return (a);
	}
	return (-1);
}

int	PhoneBook::search(void)
{
	std::string input;
	int	i = 0;

	if (!this->counter)
		return (std::cout << "No Contacts Saved\n", 0);
	printColumns(0, 0, "first name", "last name", "nickname");
	while (i < this->size)
	{
		printColumns(1, i, this->contacts[i].first_name, \
		this->contacts[i].last_name, this->contacts[i].nickname);
		i++;
	}
	std::cout.width(10); std::cout << "---------------------------------------------\n";
	std::cout << "Choose the index\n";
	input = setInput();
	if (std::cin.eof())
		return (1);
	i = atoi(input.c_str());
	while (verifyInput(input, this->size) == -1)
	{
		std::cout << "Wrong Input" << std::endl;	
		input = setInput();
		if (std::cin.eof())
			return (1);
		i = atoi(input.c_str());
	}
	printContactInfo(this->contacts[i]);
	return (0);
}
