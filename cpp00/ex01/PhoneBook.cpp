/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:12:43 by nvideira          #+#    #+#             */
/*   Updated: 2024/01/18 03:28:39 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::printHeader(void)
{
	std::cout << " " << std::string(43, '_') << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

int		PhoneBook::query(void)
{
	std::string input;
	std::getline(std::cin, input);
	if (!std::cin)
		return 1;
	for (int i = 0; i < input[i]; i++)
	{
		if (input.length() == 0 || input[i] < '0' || input[i] > '9')
		{
			std::cout << "Invalid index." << std::endl;
			return 0;
		}
	}
	if (input.length() != 1 || input[0] > '8' || _contacts[input[0] - '1'].status() == 0)
	{
		std::cout << "Index out of range." << std::endl;
		return 0;
	}
	std::cout << "First name: " << _contacts[input[0] - '1'].get_param(0) << std::endl;
	std::cout << "Last name: " << _contacts[input[0] - '1'].get_param(1) << std::endl;
	std::cout << "Nickname: " << _contacts[input[0] - '1'].get_param(2) << std::endl;
	std::cout << "Phone number: " << _contacts[input[0] - '1'].get_param(3) << std::endl;
	std::cout << "Darkest secret: " << _contacts[input[0] - '1'].get_param(4) << std::endl;
	return 1;
}

void	PhoneBook::search(void)
{
	if (!_contacts[0].status())
	{
		std::cout << "The phonebook is empty." << std::endl;
		return ;
	}
	printHeader();
	for (int i = 0; i < 8; i++)
	{
		if (_contacts[i].status())
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|";
			for (int j = 0; j < 3; j++)
			{
				if (_contacts[i].get_param(j).length() > 10)
					std::cout << _contacts[i].get_param(j).substr(0, 9) << ".|";
				else
					std::cout << std::setw(10) << _contacts[i].get_param(j) << "|";
			}
			std::cout << std::endl;
		}
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	std::cout << "Please type the index of the contact you want to see." << std::endl;
	while (!query())
		;

}
