/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:13:06 by nvideira          #+#    #+#             */
/*   Updated: 2024/01/14 07:14:47 by ubuntu           ###   ########.fr       */
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

void	Contact::add_contact(void)
{
	std::string input;
	std::cout << "Enter the contact's first name: " << std::endl;
	std::getline(std::cin, input);
	//new_contact._firstName = input;
	std::cout << "Enter the contact's last name: " << std::endl;
	std::getline(std::cin, input);
	std::cout << "Enter the contact's nickname: " << std::endl;
	std::getline(std::cin, input);
	std::cout << "Enter the contact's phone number: " << std::endl;
	std::getline(std::cin, input);
	std::cout << "Enter the contact's darkest secret: " << std::endl;
	std::getline(std::cin, input);
}
