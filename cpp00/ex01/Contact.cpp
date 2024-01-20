/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:13:06 by nvideira          #+#    #+#             */
/*   Updated: 2024/01/20 15:41:27 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "main.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	_is_empty = 0;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Contact::status(void)
{
	return (_is_empty);
}

std::string Contact::get_param(int i)
{
	if (i == 0)
		return (_firstName);
	else if (i == 1)
		return (_lastName);
	else if (i == 2)
		return (_nickname);
	else if (i == 3)
		return (_phonenumber);
	else if (i == 4)
		return (_drksecret);
	else
		return ("Non-existent parameter");
}

void	Contact::add_contact(void)
{
	std::cout << "Enter the contact's first name: " << std::endl;
	std::getline(std::cin, _firstName);
	if (!std::cin)
		return ;
	while (!_firstName.length())
		std::getline(std::cin, _firstName);
	_firstName = trim(_firstName, " \t\n\r\f\v");
	std::cout << "Enter the contact's last name: " << std::endl;
	std::getline(std::cin, _lastName);
	if (!std::cin)
		return ;
	while (!_lastName.length())
		std::getline(std::cin, _lastName);
	_lastName = trim(_lastName, " \t\n\r\f\v");
	std::cout << "Enter the contact's nickname: " << std::endl;
	std::getline(std::cin, _nickname);
	if (!std::cin)
		return ;
	while (!_nickname.length())
		std::getline(std::cin, _nickname);
	_nickname = trim(_nickname, " \t\n\r\f\v");
	std::cout << "Enter the contact's phone number: " << std::endl;
	std::getline(std::cin, _phonenumber);
	if (!std::cin)
		return ;
	if (_phonenumber.find_first_not_of("0123456789") != std::string::npos)
		std::cout << "Invalid phone number" << std::endl;
	while (!_phonenumber.length() || _phonenumber.find_first_not_of("0123456789") != std::string::npos)
	{
		std::getline(std::cin, _phonenumber);
		if (_phonenumber.find_first_not_of("0123456789") != std::string::npos)
			std::cout << "Invalid phone number" << std::endl;
	}
	_phonenumber = trim(_phonenumber, " \t\n\r\f\v");
	std::cout << "Enter the contact's darkest secret: " << std::endl;
	std::getline(std::cin, _drksecret);
	if (!std::cin)
		return ;
	while (!_drksecret.length())
		std::getline(std::cin, _drksecret);
	_is_empty = 1;
}
