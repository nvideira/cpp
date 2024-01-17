/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:13:06 by nvideira          #+#    #+#             */
/*   Updated: 2024/01/17 04:41:46 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
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
	std::cout << "Enter the contact's last name: " << std::endl;
	std::getline(std::cin, _lastName);
	if (!std::cin)
		return ;
	while (!_lastName.length())
		std::getline(std::cin, _lastName);
	std::cout << "Enter the contact's nickname: " << std::endl;
	std::getline(std::cin, _nickname);
	if (!std::cin)
		return ;
	while (!_nickname.length())
		std::getline(std::cin, _nickname);
	std::cout << "Enter the contact's phone number: " << std::endl;
	std::getline(std::cin, _phonenumber);
	if (!std::cin)
		return ;
	while (!_phonenumber.length())
		std::getline(std::cin, _phonenumber);
	std::cout << "Enter the contact's darkest secret: " << std::endl;
	std::getline(std::cin, _drksecret);
	if (!std::cin)
		return ;
	while (!_drksecret.length())
		std::getline(std::cin, _drksecret);
}
